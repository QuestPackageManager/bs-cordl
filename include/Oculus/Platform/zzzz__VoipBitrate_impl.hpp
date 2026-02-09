#pragma once
// IWYU pragma private; include "Oculus/Platform/VoipBitrate.hpp"
#include "Oculus/Platform/zzzz__VoipBitrate_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::VoipBitrate::VoipBitrate(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Platform::VoipBitrate::VoipBitrate()   {
}
constexpr ::Oculus::Platform::VoipBitrate  Oculus::Platform::VoipBitrate::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Platform::VoipBitrate  Oculus::Platform::VoipBitrate::B16000{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Platform::VoipBitrate  Oculus::Platform::VoipBitrate::B24000{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Platform::VoipBitrate  Oculus::Platform::VoipBitrate::B32000{static_cast<int32_t>(0x3)};
constexpr ::Oculus::Platform::VoipBitrate  Oculus::Platform::VoipBitrate::B64000{static_cast<int32_t>(0x4)};
constexpr ::Oculus::Platform::VoipBitrate  Oculus::Platform::VoipBitrate::B96000{static_cast<int32_t>(0x5)};
constexpr ::Oculus::Platform::VoipBitrate  Oculus::Platform::VoipBitrate::B128000{static_cast<int32_t>(0x6)};
