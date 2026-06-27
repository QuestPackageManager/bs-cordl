#pragma once
// IWYU pragma private; include "Unity/Profiling/ProfilerCategoryColor.hpp"
#include "Unity/Profiling/zzzz__ProfilerCategoryColor_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Profiling::ProfilerCategoryColor::ProfilerCategoryColor(uint16_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Profiling::ProfilerCategoryColor::ProfilerCategoryColor()   {
}
constexpr ::Unity::Profiling::ProfilerCategoryColor  Unity::Profiling::ProfilerCategoryColor::Render{static_cast<uint16_t>(0x0u)};
constexpr ::Unity::Profiling::ProfilerCategoryColor  Unity::Profiling::ProfilerCategoryColor::Scripts{static_cast<uint16_t>(0x1u)};
constexpr ::Unity::Profiling::ProfilerCategoryColor  Unity::Profiling::ProfilerCategoryColor::BurstJobs{static_cast<uint16_t>(0x2u)};
constexpr ::Unity::Profiling::ProfilerCategoryColor  Unity::Profiling::ProfilerCategoryColor::Other{static_cast<uint16_t>(0x3u)};
constexpr ::Unity::Profiling::ProfilerCategoryColor  Unity::Profiling::ProfilerCategoryColor::Physics{static_cast<uint16_t>(0x4u)};
constexpr ::Unity::Profiling::ProfilerCategoryColor  Unity::Profiling::ProfilerCategoryColor::Animation{static_cast<uint16_t>(0x5u)};
constexpr ::Unity::Profiling::ProfilerCategoryColor  Unity::Profiling::ProfilerCategoryColor::Audio{static_cast<uint16_t>(0x6u)};
constexpr ::Unity::Profiling::ProfilerCategoryColor  Unity::Profiling::ProfilerCategoryColor::AudioJob{static_cast<uint16_t>(0x7u)};
constexpr ::Unity::Profiling::ProfilerCategoryColor  Unity::Profiling::ProfilerCategoryColor::AudioUpdateJob{static_cast<uint16_t>(0x8u)};
constexpr ::Unity::Profiling::ProfilerCategoryColor  Unity::Profiling::ProfilerCategoryColor::Lighting{static_cast<uint16_t>(0x9u)};
constexpr ::Unity::Profiling::ProfilerCategoryColor  Unity::Profiling::ProfilerCategoryColor::GC{static_cast<uint16_t>(0xau)};
constexpr ::Unity::Profiling::ProfilerCategoryColor  Unity::Profiling::ProfilerCategoryColor::VSync{static_cast<uint16_t>(0xbu)};
constexpr ::Unity::Profiling::ProfilerCategoryColor  Unity::Profiling::ProfilerCategoryColor::Memory{static_cast<uint16_t>(0xcu)};
constexpr ::Unity::Profiling::ProfilerCategoryColor  Unity::Profiling::ProfilerCategoryColor::Internal{static_cast<uint16_t>(0xdu)};
constexpr ::Unity::Profiling::ProfilerCategoryColor  Unity::Profiling::ProfilerCategoryColor::UI{static_cast<uint16_t>(0xeu)};
constexpr ::Unity::Profiling::ProfilerCategoryColor  Unity::Profiling::ProfilerCategoryColor::Build{static_cast<uint16_t>(0xfu)};
constexpr ::Unity::Profiling::ProfilerCategoryColor  Unity::Profiling::ProfilerCategoryColor::Input{static_cast<uint16_t>(0x10u)};
