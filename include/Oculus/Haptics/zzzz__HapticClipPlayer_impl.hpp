#pragma once
// IWYU pragma private; include "Oculus/Haptics/HapticClipPlayer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Haptics/zzzz__HapticClipPlayer_def.hpp"
#include "Oculus/Haptics/zzzz__Controller_def.hpp"
#include "Oculus/Haptics/zzzz__HapticClip_def.hpp"
#include "Oculus/Haptics/zzzz__Haptics_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Oculus::Haptics::HapticClipPlayer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::HapticClipPlayer::*)()>(&::Oculus::Haptics::HapticClipPlayer::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5dadfb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticClipPlayer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::HapticClipPlayer::*)(::Oculus::Haptics::HapticClip*)>(&::Oculus::Haptics::HapticClipPlayer::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5dae028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { ".ctor", {}, { ::i2c::type_of<::Oculus::Haptics::HapticClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticClipPlayer.SetHaptics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::HapticClipPlayer::*)()>(&::Oculus::Haptics::HapticClipPlayer::SetHaptics)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5dae0fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { ::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticClipPlayer.Play
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::HapticClipPlayer::*)(::Oculus::Haptics::Controller)>(&::Oculus::Haptics::HapticClipPlayer::Play)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5dae1bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { "Play", {}, { ::i2c::type_of<::Oculus::Haptics::Controller>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticClipPlayer.Pause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::HapticClipPlayer::*)()>(&::Oculus::Haptics::HapticClipPlayer::Pause)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5dae2dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { "Pause", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticClipPlayer.Resume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::HapticClipPlayer::*)()>(&::Oculus::Haptics::HapticClipPlayer::Resume)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5dae3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { "Resume", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticClipPlayer.Stop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::HapticClipPlayer::*)()>(&::Oculus::Haptics::HapticClipPlayer::Stop)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5dae4f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { "Stop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticClipPlayer.Seek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::HapticClipPlayer::*)(float_t)>(&::Oculus::Haptics::HapticClipPlayer::Seek)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5dae600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { "Seek", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticClipPlayer.get_isLooping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Haptics::HapticClipPlayer::*)()>(&::Oculus::Haptics::HapticClipPlayer::get_isLooping)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5dae7b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { "get_isLooping", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticClipPlayer.set_isLooping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::HapticClipPlayer::*)(bool)>(&::Oculus::Haptics::HapticClipPlayer::set_isLooping)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5dae86c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { "set_isLooping", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticClipPlayer.get_clipDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Haptics::HapticClipPlayer::*)()>(&::Oculus::Haptics::HapticClipPlayer::get_clipDuration)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5dae924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { "get_clipDuration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticClipPlayer.get_amplitude
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Haptics::HapticClipPlayer::*)()>(&::Oculus::Haptics::HapticClipPlayer::get_amplitude)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5dae9dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { "get_amplitude", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticClipPlayer.set_amplitude
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::HapticClipPlayer::*)(float_t)>(&::Oculus::Haptics::HapticClipPlayer::set_amplitude)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5daea98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { "set_amplitude", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticClipPlayer.get_frequencyShift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Haptics::HapticClipPlayer::*)()>(&::Oculus::Haptics::HapticClipPlayer::get_frequencyShift)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5daebf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { "get_frequencyShift", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticClipPlayer.set_frequencyShift
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::HapticClipPlayer::*)(float_t)>(&::Oculus::Haptics::HapticClipPlayer::set_frequencyShift)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5daecac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { "set_frequencyShift", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticClipPlayer.get_priority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Oculus::Haptics::HapticClipPlayer::*)()>(&::Oculus::Haptics::HapticClipPlayer::get_priority)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5daee08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { "get_priority", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticClipPlayer.set_priority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::HapticClipPlayer::*)(uint32_t)>(&::Oculus::Haptics::HapticClipPlayer::set_priority)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5daeed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { "set_priority", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticClipPlayer.set_clip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::HapticClipPlayer::*)(::Oculus::Haptics::HapticClip*)>(&::Oculus::Haptics::HapticClipPlayer::set_clip)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5dae090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { "set_clip", {}, { ::i2c::type_of<::Oculus::Haptics::HapticClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticClipPlayer.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::HapticClipPlayer::*)()>(&::Oculus::Haptics::HapticClipPlayer::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5daf1e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticClipPlayer.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::HapticClipPlayer::*)(bool)>(&::Oculus::Haptics::HapticClipPlayer::Dispose)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5daf258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { ::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::HapticClipPlayer.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::HapticClipPlayer::*)()>(&::Oculus::Haptics::HapticClipPlayer::Finalize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5daf330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { ::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), 1 }));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Haptics::HapticClipPlayer::__cordl_internal_get__clipId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clipId;
}
constexpr int32_t const& Oculus::Haptics::HapticClipPlayer::__cordl_internal_get__clipId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clipId;
}
constexpr void Oculus::Haptics::HapticClipPlayer::__cordl_internal_set__clipId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clipId = value;
}
constexpr int32_t& Oculus::Haptics::HapticClipPlayer::__cordl_internal_get__playerId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerId;
}
constexpr int32_t const& Oculus::Haptics::HapticClipPlayer::__cordl_internal_get__playerId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerId;
}
constexpr void Oculus::Haptics::HapticClipPlayer::__cordl_internal_set__playerId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerId = value;
}
constexpr ::Oculus::Haptics::Haptics*& Oculus::Haptics::HapticClipPlayer::__cordl_internal_get__haptics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____haptics;
}
constexpr ::Oculus::Haptics::Haptics* const& Oculus::Haptics::HapticClipPlayer::__cordl_internal_get__haptics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____haptics;
}
constexpr void Oculus::Haptics::HapticClipPlayer::__cordl_internal_set__haptics(::Oculus::Haptics::Haptics* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____haptics = value;
}
inline void Oculus::Haptics::HapticClipPlayer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Haptics::HapticClipPlayer::_ctor(::Oculus::Haptics::HapticClip* clip) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { ".ctor", {}, { ::i2c::type_of<::Oculus::Haptics::HapticClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip);
}
inline void Oculus::Haptics::HapticClipPlayer::SetHaptics() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Haptics::HapticClipPlayer::Play(::Oculus::Haptics::Controller controller) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { "Play", {}, { ::i2c::type_of<::Oculus::Haptics::Controller>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller);
}
inline void Oculus::Haptics::HapticClipPlayer::Pause() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { "Pause", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Haptics::HapticClipPlayer::Resume() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { "Resume", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Haptics::HapticClipPlayer::Stop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { "Stop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Haptics::HapticClipPlayer::Seek(float_t time) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { "Seek", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time);
}
inline bool Oculus::Haptics::HapticClipPlayer::get_isLooping() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { "get_isLooping", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Haptics::HapticClipPlayer::set_isLooping(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { "set_isLooping", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Haptics::HapticClipPlayer::get_clipDuration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { "get_clipDuration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Oculus::Haptics::HapticClipPlayer::get_amplitude() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { "get_amplitude", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Haptics::HapticClipPlayer::set_amplitude(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { "set_amplitude", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Haptics::HapticClipPlayer::get_frequencyShift() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { "get_frequencyShift", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Haptics::HapticClipPlayer::set_frequencyShift(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { "set_frequencyShift", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t Oculus::Haptics::HapticClipPlayer::get_priority() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { "get_priority", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void Oculus::Haptics::HapticClipPlayer::set_priority(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { "set_priority", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Haptics::HapticClipPlayer::set_clip(::Oculus::Haptics::HapticClip* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { "set_clip", {}, { ::i2c::type_of<::Oculus::Haptics::HapticClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Haptics::HapticClipPlayer::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Haptics::HapticClipPlayer::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void Oculus::Haptics::HapticClipPlayer::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Haptics::HapticClipPlayer*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Haptics::HapticClipPlayer* Oculus::Haptics::HapticClipPlayer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Haptics::HapticClipPlayer*>());
}
inline ::Oculus::Haptics::HapticClipPlayer* Oculus::Haptics::HapticClipPlayer::New_ctor(::Oculus::Haptics::HapticClip* clip) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Haptics::HapticClipPlayer*>(clip));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Oculus::Haptics::HapticClipPlayer::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Oculus::Haptics::HapticClipPlayer::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Haptics::HapticClipPlayer::HapticClipPlayer() {}
