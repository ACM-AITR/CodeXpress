class Player:
    def __init__(self, name, cards):
        self.name = name
        self.cards = cards
        self.score = 0

    def play_card(self):
        card = self.cards.pop(0)
        if card == 'D':
            self.score *= 2
        elif card == 'H':
            self.score //= 2
        else:
            self.score += int(card)

    def is_empty(self):
        return len(self.cards) == 0


def play_game(mohan, rohan):
    while not mohan.is_empty() and not rohan.is_empty():
        mohan.play_card()
        rohan.play_card()

    if mohan.score > rohan.score:
        return mohan.name, mohan.score
    else:
        return rohan.name, rohan.score


def main():
    t = int(input())
    for i in range(t):
        n = int(input())
        mohan_cards = input().split()
        rohan_cards = input().split()

        mohan = Player('Mohan', mohan_cards)
        rohan = Player('Rohan', rohan_cards)

        winner_name, winner_score = play_game(mohan, rohan)
        print(f'{winner_name} {winner_score}')


if __name__ == '__main__':
    main()
