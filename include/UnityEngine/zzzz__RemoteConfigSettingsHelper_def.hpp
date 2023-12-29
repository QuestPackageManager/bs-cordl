#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteConfigSettingsHelper)
namespace UnityEngine {
struct __RemoteConfigSettingsHelper__Tag;
}
// Forward declare root types
namespace UnityEngine {
struct __RemoteConfigSettingsHelper__Tag;
}
namespace UnityEngine {
class RemoteConfigSettingsHelper;
}
// Write type traits
MARK_VAL_T(::UnityEngine::__RemoteConfigSettingsHelper__Tag);
MARK_REF_PTR_T(::UnityEngine::RemoteConfigSettingsHelper);
// Type: ::Tag
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15934))
// CS Name: ::RemoteConfigSettingsHelper::Tag
struct CORDL_TYPE __RemoteConfigSettingsHelper__Tag {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____RemoteConfigSettingsHelper__Tag_Unwrapped
  enum struct ____RemoteConfigSettingsHelper__Tag_Unwrapped : int32_t {
    __E_kUnknown = static_cast<int32_t>(0x0),
    __E_kIntVal = static_cast<int32_t>(0x1),
    __E_kInt64Val = static_cast<int32_t>(0x2),
    __E_kUInt64Val = static_cast<int32_t>(0x3),
    __E_kDoubleVal = static_cast<int32_t>(0x4),
    __E_kBoolVal = static_cast<int32_t>(0x5),
    __E_kStringVal = static_cast<int32_t>(0x6),
    __E_kArrayVal = static_cast<int32_t>(0x7),
    __E_kMixedArrayVal = static_cast<int32_t>(0x8),
    __E_kMapVal = static_cast<int32_t>(0x9),
    __E_kMaxTags = static_cast<int32_t>(0xa),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____RemoteConfigSettingsHelper__Tag_Unwrapped() const noexcept {
    return static_cast<____RemoteConfigSettingsHelper__Tag_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __RemoteConfigSettingsHelper__Tag(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RemoteConfigSettingsHelper__Tag();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field kUnknown value: static_cast<int32_t>(0x0)
  static ::UnityEngine::__RemoteConfigSettingsHelper__Tag const kUnknown;

  /// @brief Field kIntVal value: static_cast<int32_t>(0x1)
  static ::UnityEngine::__RemoteConfigSettingsHelper__Tag const kIntVal;

  /// @brief Field kInt64Val value: static_cast<int32_t>(0x2)
  static ::UnityEngine::__RemoteConfigSettingsHelper__Tag const kInt64Val;

  /// @brief Field kUInt64Val value: static_cast<int32_t>(0x3)
  static ::UnityEngine::__RemoteConfigSettingsHelper__Tag const kUInt64Val;

  /// @brief Field kDoubleVal value: static_cast<int32_t>(0x4)
  static ::UnityEngine::__RemoteConfigSettingsHelper__Tag const kDoubleVal;

  /// @brief Field kBoolVal value: static_cast<int32_t>(0x5)
  static ::UnityEngine::__RemoteConfigSettingsHelper__Tag const kBoolVal;

  /// @brief Field kStringVal value: static_cast<int32_t>(0x6)
  static ::UnityEngine::__RemoteConfigSettingsHelper__Tag const kStringVal;

  /// @brief Field kArrayVal value: static_cast<int32_t>(0x7)
  static ::UnityEngine::__RemoteConfigSettingsHelper__Tag const kArrayVal;

  /// @brief Field kMixedArrayVal value: static_cast<int32_t>(0x8)
  static ::UnityEngine::__RemoteConfigSettingsHelper__Tag const kMixedArrayVal;

  /// @brief Field kMapVal value: static_cast<int32_t>(0x9)
  static ::UnityEngine::__RemoteConfigSettingsHelper__Tag const kMapVal;

  /// @brief Field kMaxTags value: static_cast<int32_t>(0xa)
  static ::UnityEngine::__RemoteConfigSettingsHelper__Tag const kMaxTags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__RemoteConfigSettingsHelper__Tag, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__RemoteConfigSettingsHelper__Tag, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::RemoteConfigSettingsHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15935))
// CS Name: ::UnityEngine::RemoteConfigSettingsHelper*
class CORDL_TYPE RemoteConfigSettingsHelper : public ::System::Object {
public:
  // Declarations
  using Tag = ::UnityEngine::__RemoteConfigSettingsHelper__Tag;

  // Ctor Parameters [CppParam { name: "", ty: "RemoteConfigSettingsHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RemoteConfigSettingsHelper(RemoteConfigSettingsHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RemoteConfigSettingsHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RemoteConfigSettingsHelper(RemoteConfigSettingsHelper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RemoteConfigSettingsHelper();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RemoteConfigSettingsHelper, 0x10>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__RemoteConfigSettingsHelper__Tag, "UnityEngine", "RemoteConfigSettingsHelper/Tag");
NEED_NO_BOX(::UnityEngine::RemoteConfigSettingsHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RemoteConfigSettingsHelper*, "UnityEngine", "RemoteConfigSettingsHelper");
