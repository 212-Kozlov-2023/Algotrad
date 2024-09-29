#include <benchmark/benchmark.h>
#include "my_add.hpp"

static void BM_my_add(benchmark::State& state) {
    for (auto _ : state) {
        my_add(2, 3); 
    }
}
BENCHMARK(BM_my_add);

BENCHMARK_MAIN();
