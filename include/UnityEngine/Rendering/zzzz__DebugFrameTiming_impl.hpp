#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\DebugFrameTiming.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FrameTimeSample_impl.hpp"
#include "UnityEngine/zzzz__FrameTiming_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugFrameTiming_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__BottleneckHistory_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "UnityEngine/Rendering/zzzz__FrameTimeSampleHistory_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::DebugFrameTiming.get_bottleneckHistorySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::DebugFrameTiming::*)()>(&::UnityEngine::Rendering::DebugFrameTiming::get_bottleneckHistorySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67609ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "get_bottleneckHistorySize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugFrameTiming.set_bottleneckHistorySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugFrameTiming::*)(int32_t)>(&::UnityEngine::Rendering::DebugFrameTiming::set_bottleneckHistorySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67609f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "set_bottleneckHistorySize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugFrameTiming.get_sampleHistorySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::DebugFrameTiming::*)()>(&::UnityEngine::Rendering::DebugFrameTiming::get_sampleHistorySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67609fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "get_sampleHistorySize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugFrameTiming.set_sampleHistorySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugFrameTiming::*)(int32_t)>(&::UnityEngine::Rendering::DebugFrameTiming::set_sampleHistorySize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6760a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "set_sampleHistorySize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugFrameTiming._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugFrameTiming::*)()>(&::UnityEngine::Rendering::DebugFrameTiming::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6760a0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugFrameTiming.UpdateFrameTiming
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugFrameTiming::*)()>(&::UnityEngine::Rendering::DebugFrameTiming::UpdateFrameTiming)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x6760c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "UpdateFrameTiming", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugFrameTiming.RegisterDebugUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugFrameTiming::*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Widget*>*)>(
    &::UnityEngine::Rendering::DebugFrameTiming::RegisterDebugUI)> {
  constexpr static std::size_t size = 0x14e8;
  constexpr static std::size_t addrs = 0x67614a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(),
                                                             { "RegisterDebugUI", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Widget*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugFrameTiming.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugFrameTiming::*)()>(&::UnityEngine::Rendering::DebugFrameTiming::Reset)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6762a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugFrameTiming._RegisterDebugUI_b__17_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::DebugFrameTiming::*)()>(&::UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6762b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugFrameTiming._RegisterDebugUI_b__17_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::DebugFrameTiming::*)()>(&::UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_1)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6762b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugFrameTiming._RegisterDebugUI_b__17_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::DebugFrameTiming::*)()>(&::UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_2)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6762bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugFrameTiming._RegisterDebugUI_b__17_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::DebugFrameTiming::*)()>(&::UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_3)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6762bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_3", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugFrameTiming._RegisterDebugUI_b__17_4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::DebugFrameTiming::*)()>(&::UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_4)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6762c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_4", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugFrameTiming._RegisterDebugUI_b__17_5
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::DebugFrameTiming::*)()>(&::UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_5)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6762c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_5", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugFrameTiming._RegisterDebugUI_b__17_6
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::DebugFrameTiming::*)()>(&::UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_6)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6762c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_6", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugFrameTiming._RegisterDebugUI_b__17_7
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::DebugFrameTiming::*)()>(&::UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_7)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6762cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_7", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugFrameTiming._RegisterDebugUI_b__17_8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::DebugFrameTiming::*)()>(&::UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_8)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6762ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_8", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugFrameTiming._RegisterDebugUI_b__17_9
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::DebugFrameTiming::*)()>(&::UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_9)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6762d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_9", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugFrameTiming._RegisterDebugUI_b__17_10
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::DebugFrameTiming::*)()>(&::UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_10)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6762d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_10", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugFrameTiming._RegisterDebugUI_b__17_11
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::DebugFrameTiming::*)()>(&::UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_11)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6762d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_11", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugFrameTiming._RegisterDebugUI_b__17_12
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::DebugFrameTiming::*)()>(&::UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_12)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6762da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_12", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugFrameTiming._RegisterDebugUI_b__17_13
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::DebugFrameTiming::*)()>(&::UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_13)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6762dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_13", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugFrameTiming._RegisterDebugUI_b__17_14
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::DebugFrameTiming::*)()>(&::UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_14)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6762e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_14", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugFrameTiming._RegisterDebugUI_b__17_15
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::DebugFrameTiming::*)()>(&::UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_15)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6762e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_15", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugFrameTiming._RegisterDebugUI_b__17_16
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::DebugFrameTiming::*)()>(&::UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_16)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6762e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_16", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugFrameTiming._RegisterDebugUI_b__17_17
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::DebugFrameTiming::*)()>(&::UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_17)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6762e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_17", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugFrameTiming._RegisterDebugUI_b__17_18
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::DebugFrameTiming::*)()>(&::UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_18)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6762ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_18", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugFrameTiming._RegisterDebugUI_b__17_19
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::DebugFrameTiming::*)()>(&::UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_19)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6762ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_19", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugFrameTiming._RegisterDebugUI_b__17_20
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::DebugFrameTiming::*)()>(&::UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_20)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6762f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_20", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DebugFrameTiming._RegisterDebugUI_b__17_21
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::Rendering::DebugFrameTiming::*)()>(&::UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_21)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6762f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_21", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::FrameTimeSampleHistory*& UnityEngine::Rendering::DebugFrameTiming::__cordl_internal_get_m_FrameHistory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FrameHistory;
}
constexpr ::UnityEngine::Rendering::FrameTimeSampleHistory* const& UnityEngine::Rendering::DebugFrameTiming::__cordl_internal_get_m_FrameHistory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FrameHistory;
}
constexpr void UnityEngine::Rendering::DebugFrameTiming::__cordl_internal_set_m_FrameHistory(::UnityEngine::Rendering::FrameTimeSampleHistory* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FrameHistory = value;
}
constexpr ::UnityEngine::Rendering::BottleneckHistory*& UnityEngine::Rendering::DebugFrameTiming::__cordl_internal_get_m_BottleneckHistory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BottleneckHistory;
}
constexpr ::UnityEngine::Rendering::BottleneckHistory* const& UnityEngine::Rendering::DebugFrameTiming::__cordl_internal_get_m_BottleneckHistory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BottleneckHistory;
}
constexpr void UnityEngine::Rendering::DebugFrameTiming::__cordl_internal_set_m_BottleneckHistory(::UnityEngine::Rendering::BottleneckHistory* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BottleneckHistory = value;
}
constexpr int32_t& UnityEngine::Rendering::DebugFrameTiming::__cordl_internal_get__bottleneckHistorySize_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bottleneckHistorySize_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::DebugFrameTiming::__cordl_internal_get__bottleneckHistorySize_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bottleneckHistorySize_k__BackingField;
}
constexpr void UnityEngine::Rendering::DebugFrameTiming::__cordl_internal_set__bottleneckHistorySize_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bottleneckHistorySize_k__BackingField = value;
}
constexpr int32_t& UnityEngine::Rendering::DebugFrameTiming::__cordl_internal_get__sampleHistorySize_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sampleHistorySize_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::DebugFrameTiming::__cordl_internal_get__sampleHistorySize_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sampleHistorySize_k__BackingField;
}
constexpr void UnityEngine::Rendering::DebugFrameTiming::__cordl_internal_set__sampleHistorySize_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sampleHistorySize_k__BackingField = value;
}
constexpr ::ArrayW<::UnityEngine::FrameTiming>& UnityEngine::Rendering::DebugFrameTiming::__cordl_internal_get_m_Timing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Timing;
}
constexpr ::ArrayW<::UnityEngine::FrameTiming> const& UnityEngine::Rendering::DebugFrameTiming::__cordl_internal_get_m_Timing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Timing;
}
constexpr void UnityEngine::Rendering::DebugFrameTiming::__cordl_internal_set_m_Timing(::ArrayW<::UnityEngine::FrameTiming> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Timing = value;
}
constexpr ::UnityEngine::Rendering::FrameTimeSample& UnityEngine::Rendering::DebugFrameTiming::__cordl_internal_get_m_Sample() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Sample;
}
constexpr ::UnityEngine::Rendering::FrameTimeSample const& UnityEngine::Rendering::DebugFrameTiming::__cordl_internal_get_m_Sample() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Sample;
}
constexpr void UnityEngine::Rendering::DebugFrameTiming::__cordl_internal_set_m_Sample(::UnityEngine::Rendering::FrameTimeSample value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Sample = value;
}
inline int32_t UnityEngine::Rendering::DebugFrameTiming::get_bottleneckHistorySize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "get_bottleneckHistorySize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugFrameTiming::set_bottleneckHistorySize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "set_bottleneckHistorySize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::DebugFrameTiming::get_sampleHistorySize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "get_sampleHistorySize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugFrameTiming::set_sampleHistorySize(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "set_sampleHistorySize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::DebugFrameTiming::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugFrameTiming::UpdateFrameTiming() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "UpdateFrameTiming", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::DebugFrameTiming::RegisterDebugUI(::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Widget*>* list) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(),
                                                           { "RegisterDebugUI", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::DebugUI_Widget*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list);
}
inline void UnityEngine::Rendering::DebugFrameTiming::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_3() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_3", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_4() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_4", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_5() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_5", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_6() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_6", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_7() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_7", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_8() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_8", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_9() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_9", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_10() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_10", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_11() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_11", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_12() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_12", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_13() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_13", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_14() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_14", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_15() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_15", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_16() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_16", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_17() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_17", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_18() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_18", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_19() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_19", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_20() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_20", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Rendering::DebugFrameTiming::_RegisterDebugUI_b__17_21() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugFrameTiming*>(), { "<RegisterDebugUI>b__17_21", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugFrameTiming* UnityEngine::Rendering::DebugFrameTiming::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugFrameTiming*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugFrameTiming::DebugFrameTiming() {}
