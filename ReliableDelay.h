class ReliableDelay {
public:
  ReliableDelay();
  bool WaitMillis(unsigned long long PauseMillis);
private:
  unsigned long long PreviousState;
  void SetState();
};