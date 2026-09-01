#pragma once
// IWYU pragma private; include "Oculus\Haptics\HapticSource.hpp"
#include "Oculus/Haptics/zzzz__Controller_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Haptics/zzzz__HapticSource_def.hpp"
#include "Oculus/Haptics/zzzz__Controller_def.hpp"
#include "Oculus/Haptics/zzzz__HapticClipPlayer_def.hpp"
#include "Oculus/Haptics/zzzz__HapticClip_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
//  Writing Method size for method: ::Oculus::Haptics::HapticSource.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::HapticSource::*)()>(&::Oculus::Haptics::HapticSource::Awake)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5db2bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticSource.Play
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::HapticSource::*)()>(&::Oculus::Haptics::HapticSource::Play)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5db2cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "Play", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticSource.Play
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::HapticSource::*)(::Oculus::Haptics::Controller)>(&::Oculus::Haptics::HapticSource::Play)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5db2cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "Play", {}, { ::i2c::type_of<::Oculus::Haptics::Controller>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticSource.Pause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::HapticSource::*)()>(&::Oculus::Haptics::HapticSource::Pause)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5db2cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "Pause", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticSource.Resume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::HapticSource::*)()>(&::Oculus::Haptics::HapticSource::Resume)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5db2d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "Resume", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticSource.Stop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::HapticSource::*)()>(&::Oculus::Haptics::HapticSource::Stop)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5db2d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "Stop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticSource.Seek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::HapticSource::*)(float_t)>(&::Oculus::Haptics::HapticSource::Seek)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5db2d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "Seek", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticSource.set_clip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::HapticSource::*)(::Oculus::Haptics::HapticClip*)>(&::Oculus::Haptics::HapticSource::set_clip)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5db2d3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "set_clip", {}, { ::i2c::type_of<::Oculus::Haptics::HapticClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticSource.get_clipDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Haptics::HapticSource::*)()>(&::Oculus::Haptics::HapticSource::get_clipDuration)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5db2d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "get_clipDuration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticSource.set_controller
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::HapticSource::*)(::Oculus::Haptics::Controller)>(&::Oculus::Haptics::HapticSource::set_controller)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5db2d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "set_controller", {}, { ::i2c::type_of<::Oculus::Haptics::Controller>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticSource.get_loop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Haptics::HapticSource::*)()>(&::Oculus::Haptics::HapticSource::get_loop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5db2d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "get_loop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticSource.set_loop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::HapticSource::*)(bool)>(&::Oculus::Haptics::HapticSource::set_loop)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5db2d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "set_loop", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticSource.get_amplitude
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Haptics::HapticSource::*)()>(&::Oculus::Haptics::HapticSource::get_amplitude)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5db2d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "get_amplitude", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticSource.set_amplitude
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::HapticSource::*)(float_t)>(&::Oculus::Haptics::HapticSource::set_amplitude)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5db2da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "set_amplitude", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticSource.get_frequencyShift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Haptics::HapticSource::*)()>(&::Oculus::Haptics::HapticSource::get_frequencyShift)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5db2dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "get_frequencyShift", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticSource.set_frequencyShift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::HapticSource::*)(float_t)>(&::Oculus::Haptics::HapticSource::set_frequencyShift)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5db2dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "set_frequencyShift", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticSource.get_priority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Oculus::Haptics::HapticSource::*)()>(&::Oculus::Haptics::HapticSource::get_priority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5db2de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "get_priority", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticSource.set_priority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::HapticSource::*)(uint32_t)>(&::Oculus::Haptics::HapticSource::set_priority)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5db2de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "set_priority", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticSource.SyncSerializedFieldsToPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::HapticSource::*)()>(&::Oculus::Haptics::HapticSource::SyncSerializedFieldsToPlayer)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5db2c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "SyncSerializedFieldsToPlayer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticSource.OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::HapticSource::*)()>(&::Oculus::Haptics::HapticSource::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5db2e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "OnBeforeSerialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticSource.OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::HapticSource::*)()>(&::Oculus::Haptics::HapticSource::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5db2e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "OnAfterDeserialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticSource.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::HapticSource::*)()>(&::Oculus::Haptics::HapticSource::OnDestroy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5db2e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { ::i2c::class_of<::Oculus::Haptics::HapticSource*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticSource._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::HapticSource::*)()>(&::Oculus::Haptics::HapticSource::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5db2e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Haptics::HapticClipPlayer*& Oculus::Haptics::HapticSource::__cordl_internal_get__player() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____player;
}
constexpr ::Oculus::Haptics::HapticClipPlayer* const& Oculus::Haptics::HapticSource::__cordl_internal_get__player() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____player;
}
constexpr void Oculus::Haptics::HapticSource::__cordl_internal_set__player(::Oculus::Haptics::HapticClipPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____player = value;
}
constexpr ::UnityW<::Oculus::Haptics::HapticClip>& Oculus::Haptics::HapticSource::__cordl_internal_get__clip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clip;
}
constexpr ::UnityW<::Oculus::Haptics::HapticClip> const& Oculus::Haptics::HapticSource::__cordl_internal_get__clip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clip;
}
constexpr void Oculus::Haptics::HapticSource::__cordl_internal_set__clip(::UnityW<::Oculus::Haptics::HapticClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clip = value;
}
constexpr ::Oculus::Haptics::Controller& Oculus::Haptics::HapticSource::__cordl_internal_get__controller() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controller;
}
constexpr ::Oculus::Haptics::Controller const& Oculus::Haptics::HapticSource::__cordl_internal_get__controller() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controller;
}
constexpr void Oculus::Haptics::HapticSource::__cordl_internal_set__controller(::Oculus::Haptics::Controller value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____controller = value;
}
constexpr bool& Oculus::Haptics::HapticSource::__cordl_internal_get__loop() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loop;
}
constexpr bool const& Oculus::Haptics::HapticSource::__cordl_internal_get__loop() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loop;
}
constexpr void Oculus::Haptics::HapticSource::__cordl_internal_set__loop(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loop = value;
}
constexpr float_t& Oculus::Haptics::HapticSource::__cordl_internal_get__amplitude() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____amplitude;
}
constexpr float_t const& Oculus::Haptics::HapticSource::__cordl_internal_get__amplitude() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____amplitude;
}
constexpr void Oculus::Haptics::HapticSource::__cordl_internal_set__amplitude(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____amplitude = value;
}
constexpr float_t& Oculus::Haptics::HapticSource::__cordl_internal_get__frequencyShift() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frequencyShift;
}
constexpr float_t const& Oculus::Haptics::HapticSource::__cordl_internal_get__frequencyShift() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____frequencyShift;
}
constexpr void Oculus::Haptics::HapticSource::__cordl_internal_set__frequencyShift(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____frequencyShift = value;
}
constexpr uint32_t& Oculus::Haptics::HapticSource::__cordl_internal_get__priority() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____priority;
}
constexpr uint32_t const& Oculus::Haptics::HapticSource::__cordl_internal_get__priority() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____priority;
}
constexpr void Oculus::Haptics::HapticSource::__cordl_internal_set__priority(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____priority = value;
}
inline void Oculus::Haptics::HapticSource::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Haptics::HapticSource::Play() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "Play", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Haptics::HapticSource::Play(::Oculus::Haptics::Controller controller) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "Play", {}, { ::i2c::type_of<::Oculus::Haptics::Controller>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline void Oculus::Haptics::HapticSource::Pause() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "Pause", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Haptics::HapticSource::Resume() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "Resume", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Haptics::HapticSource::Stop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "Stop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Haptics::HapticSource::Seek(float_t time) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "Seek", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline void Oculus::Haptics::HapticSource::set_clip(::Oculus::Haptics::HapticClip* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "set_clip", {}, { ::i2c::type_of<::Oculus::Haptics::HapticClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Haptics::HapticSource::get_clipDuration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "get_clipDuration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Haptics::HapticSource::set_controller(::Oculus::Haptics::Controller value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "set_controller", {}, { ::i2c::type_of<::Oculus::Haptics::Controller>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Haptics::HapticSource::get_loop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "get_loop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Haptics::HapticSource::set_loop(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "set_loop", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Haptics::HapticSource::get_amplitude() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "get_amplitude", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Haptics::HapticSource::set_amplitude(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "set_amplitude", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Haptics::HapticSource::get_frequencyShift() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "get_frequencyShift", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Haptics::HapticSource::set_frequencyShift(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "set_frequencyShift", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t Oculus::Haptics::HapticSource::get_priority() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "get_priority", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void Oculus::Haptics::HapticSource::set_priority(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "set_priority", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Haptics::HapticSource::SyncSerializedFieldsToPlayer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "SyncSerializedFieldsToPlayer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Haptics::HapticSource::OnBeforeSerialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "OnBeforeSerialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Haptics::HapticSource::OnAfterDeserialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { "OnAfterDeserialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Haptics::HapticSource::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Haptics::HapticSource*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Haptics::HapticSource::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticSource*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Haptics::HapticSource* Oculus::Haptics::HapticSource::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Haptics::HapticSource*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr Oculus::Haptics::HapticSource::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* Oculus::Haptics::HapticSource::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Haptics::HapticSource::HapticSource() {}
