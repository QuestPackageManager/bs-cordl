#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapCharacteristicExtensions.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicExtensions_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicExtensions.GetAllBeatmapCharacteristics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<::GlobalNamespace::BeatmapCharacteristic> (*)()>(
    &::GlobalNamespace::BeatmapCharacteristicExtensions::GetAllBeatmapCharacteristics)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x370c734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicExtensions*>(), { "GetAllBeatmapCharacteristics", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicExtensions.SerializedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::BeatmapCharacteristic)>(&::GlobalNamespace::BeatmapCharacteristicExtensions::SerializedName)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x370c5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicExtensions*>(),
                                                                                           { "SerializedName", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicExtensions.BeatmapCharacteristicFromSerializedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::GlobalNamespace::BeatmapCharacteristic>)>(
    &::GlobalNamespace::BeatmapCharacteristicExtensions::BeatmapCharacteristicFromSerializedName)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x370c7ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicExtensions*>(),
                                         { "BeatmapCharacteristicFromSerializedName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapCharacteristic>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicExtensions.CompoundIdPartName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::BeatmapCharacteristic)>(&::GlobalNamespace::BeatmapCharacteristicExtensions::CompoundIdPartName)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x370c91c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicExtensions*>(),
                                                                                           { "CompoundIdPartName", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicExtensions.SortingOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::BeatmapCharacteristic)>(&::GlobalNamespace::BeatmapCharacteristicExtensions::SortingOrder)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x370c9e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicExtensions*>(),
                                                                                           { "SortingOrder", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicExtensions.ContainsRotationEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::BeatmapCharacteristic)>(&::GlobalNamespace::BeatmapCharacteristicExtensions::ContainsRotationEvents)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3707110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicExtensions*>(),
                                                                                           { "ContainsRotationEvents", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicExtensions.Requires360Movement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::BeatmapCharacteristic)>(&::GlobalNamespace::BeatmapCharacteristicExtensions::Requires360Movement)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x370c9ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicExtensions*>(),
                                                                                           { "Requires360Movement", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicExtensions.NumberOfColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::BeatmapCharacteristic)>(&::GlobalNamespace::BeatmapCharacteristicExtensions::NumberOfColors)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x370c9f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicExtensions*>(),
                                                                                           { "NumberOfColors", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicExtensions.LocalizedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::BeatmapCharacteristic)>(&::GlobalNamespace::BeatmapCharacteristicExtensions::LocalizedName)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x370ca08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicExtensions*>(),
                                                                                           { "LocalizedName", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicExtensions.LocalizedHint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::BeatmapCharacteristic)>(&::GlobalNamespace::BeatmapCharacteristicExtensions::LocalizedHint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x370cb34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicExtensions*>(),
                                                                                           { "LocalizedHint", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicExtensions.NameLocalizationKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::BeatmapCharacteristic)>(&::GlobalNamespace::BeatmapCharacteristicExtensions::NameLocalizationKey)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x370ca68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicExtensions*>(),
                                                                                           { "NameLocalizationKey", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicExtensions.HintLocalizationKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::BeatmapCharacteristic)>(&::GlobalNamespace::BeatmapCharacteristicExtensions::HintLocalizationKey)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x370cb94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicExtensions*>(),
                                                                                           { "HintLocalizationKey", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicExtensions.SerializedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::BeatmapCharacteristicSO*)>(&::GlobalNamespace::BeatmapCharacteristicExtensions::SerializedName)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x370cc60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicExtensions*>(),
                                                                                           { "SerializedName", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristicSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicExtensions.AsEnum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapCharacteristic (*)(::GlobalNamespace::BeatmapCharacteristicSO*)>(
    &::GlobalNamespace::BeatmapCharacteristicExtensions::AsEnum)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x370c274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicExtensions*>(), { "AsEnum", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristicSO*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapCharacteristicExtensions::setStaticF_kAllBeatmapCharacteristics(::ArrayW<::GlobalNamespace::BeatmapCharacteristic> value) {
  ::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::BeatmapCharacteristic>, "kAllBeatmapCharacteristics", ::GlobalNamespace::BeatmapCharacteristicExtensions*>(
      std::forward<::ArrayW<::GlobalNamespace::BeatmapCharacteristic>>(value));
}
inline ::ArrayW<::GlobalNamespace::BeatmapCharacteristic> GlobalNamespace::BeatmapCharacteristicExtensions::getStaticF_kAllBeatmapCharacteristics() {
  return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::BeatmapCharacteristic>, "kAllBeatmapCharacteristics", ::GlobalNamespace::BeatmapCharacteristicExtensions*>();
}
inline ::System::ReadOnlySpan_1<::GlobalNamespace::BeatmapCharacteristic> GlobalNamespace::BeatmapCharacteristicExtensions::GetAllBeatmapCharacteristics() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicExtensions*>(), { "GetAllBeatmapCharacteristics", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<::GlobalNamespace::BeatmapCharacteristic>>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::BeatmapCharacteristicExtensions::SerializedName(::GlobalNamespace::BeatmapCharacteristic characteristic) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicExtensions*>(),
                                                                                         { "SerializedName", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, characteristic);
}
inline bool GlobalNamespace::BeatmapCharacteristicExtensions::BeatmapCharacteristicFromSerializedName(::StringW name, ::by_ref<::GlobalNamespace::BeatmapCharacteristic> characteristic) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicExtensions*>(),
                                       { "BeatmapCharacteristicFromSerializedName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapCharacteristic>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, characteristic);
}
inline ::StringW GlobalNamespace::BeatmapCharacteristicExtensions::CompoundIdPartName(::GlobalNamespace::BeatmapCharacteristic characteristic) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicExtensions*>(),
                                                                                         { "CompoundIdPartName", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, characteristic);
}
inline int32_t GlobalNamespace::BeatmapCharacteristicExtensions::SortingOrder(::GlobalNamespace::BeatmapCharacteristic characteristic) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicExtensions*>(),
                                                                                         { "SortingOrder", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, characteristic);
}
inline bool GlobalNamespace::BeatmapCharacteristicExtensions::ContainsRotationEvents(::GlobalNamespace::BeatmapCharacteristic characteristic) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicExtensions*>(),
                                                                                         { "ContainsRotationEvents", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, characteristic);
}
inline bool GlobalNamespace::BeatmapCharacteristicExtensions::Requires360Movement(::GlobalNamespace::BeatmapCharacteristic characteristic) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicExtensions*>(),
                                                                                         { "Requires360Movement", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, characteristic);
}
inline int32_t GlobalNamespace::BeatmapCharacteristicExtensions::NumberOfColors(::GlobalNamespace::BeatmapCharacteristic characteristic) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicExtensions*>(),
                                                                                         { "NumberOfColors", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, characteristic);
}
inline ::StringW GlobalNamespace::BeatmapCharacteristicExtensions::LocalizedName(::GlobalNamespace::BeatmapCharacteristic characteristic) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicExtensions*>(),
                                                                                         { "LocalizedName", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, characteristic);
}
inline ::StringW GlobalNamespace::BeatmapCharacteristicExtensions::LocalizedHint(::GlobalNamespace::BeatmapCharacteristic characteristic) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicExtensions*>(),
                                                                                         { "LocalizedHint", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, characteristic);
}
inline ::StringW GlobalNamespace::BeatmapCharacteristicExtensions::NameLocalizationKey(::GlobalNamespace::BeatmapCharacteristic characteristic) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicExtensions*>(),
                                                                                         { "NameLocalizationKey", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, characteristic);
}
inline ::StringW GlobalNamespace::BeatmapCharacteristicExtensions::HintLocalizationKey(::GlobalNamespace::BeatmapCharacteristic characteristic) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicExtensions*>(),
                                                                                         { "HintLocalizationKey", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, characteristic);
}
inline ::StringW GlobalNamespace::BeatmapCharacteristicExtensions::SerializedName(::GlobalNamespace::BeatmapCharacteristicSO* so) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicExtensions*>(),
                                                                                         { "SerializedName", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristicSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, so);
}
inline ::GlobalNamespace::BeatmapCharacteristic GlobalNamespace::BeatmapCharacteristicExtensions::AsEnum(::GlobalNamespace::BeatmapCharacteristicSO* so) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicExtensions*>(), { "AsEnum", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristicSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapCharacteristic>(nullptr, ___internal_method, so);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapCharacteristicExtensions::BeatmapCharacteristicExtensions() {}
