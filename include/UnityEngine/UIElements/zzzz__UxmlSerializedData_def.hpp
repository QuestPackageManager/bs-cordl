#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlSerializedData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UxmlSerializedData)
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct UxmlSerializedData_UxmlAttributeFlags;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct UxmlSerializedData_UxmlAttributeFlags;
}
namespace UnityEngine::UIElements {
class UxmlSerializedData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags);
MARK_REF_PTR_T(::UnityEngine::UIElements::UxmlSerializedData);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.UxmlSerializedData/UxmlAttributeFlags
struct CORDL_TYPE UxmlSerializedData_UxmlAttributeFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __UxmlSerializedData_UxmlAttributeFlags_Unwrapped
  enum struct __UxmlSerializedData_UxmlAttributeFlags_Unwrapped : uint8_t {
    __E_Ignore = static_cast<uint8_t>(0x0u),
    __E_OverriddenInUxml = static_cast<uint8_t>(0x1u),
    __E_DefaultValue = static_cast<uint8_t>(0x2u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UxmlSerializedData_UxmlAttributeFlags_Unwrapped() const noexcept {
    return static_cast<__UxmlSerializedData_UxmlAttributeFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlSerializedData_UxmlAttributeFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr UxmlSerializedData_UxmlAttributeFlags(uint8_t value__) noexcept;

  /// @brief Field DefaultValue value: U8(2)
  static ::UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags const DefaultValue;

  /// @brief Field Ignore value: U8(0)
  static ::UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags const Ignore;

  /// @brief Field OverriddenInUxml value: U8(1)
  static ::UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags const OverriddenInUxml;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5192 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags, 0x1>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object, UnityEngine.UIElements.UxmlSerializedData::UxmlAttributeFlags
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlSerializedData
class CORDL_TYPE UxmlSerializedData : public ::System::Object {
public:
  // Declarations
  using UxmlAttributeFlags = ::UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags;

  /// @brief Field s_CurrentDeserializeFlags, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_s_CurrentDeserializeFlags,
                      put = setStaticF_s_CurrentDeserializeFlags)) ::UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags s_CurrentDeserializeFlags;

  /// @brief Field uxmlAssetId, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_uxmlAssetId, put = __cordl_internal_set_uxmlAssetId)) int32_t uxmlAssetId;

  /// @brief Method CreateInstance, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* CreateInstance();

  /// @brief Method Deserialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Deserialize(::System::Object* obj);

  static inline ::UnityEngine::UIElements::UxmlSerializedData* New_ctor();

  constexpr int32_t const& __cordl_internal_get_uxmlAssetId() const;

  constexpr int32_t& __cordl_internal_get_uxmlAssetId();

  constexpr void __cordl_internal_set_uxmlAssetId(int32_t value);

  /// @brief Method .ctor, addr 0x6a8cc54, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags getStaticF_s_CurrentDeserializeFlags();

  static inline void setStaticF_s_CurrentDeserializeFlags(::UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UxmlSerializedData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UxmlSerializedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UxmlSerializedData(UxmlSerializedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UxmlSerializedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UxmlSerializedData(UxmlSerializedData const&) = delete;

  /// @brief Field AttributeFlagSuffix offset 0xffffffff size 0x8
  static constexpr ::ConstString AttributeFlagSuffix{ u"_UxmlAttributeFlags" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5193 };

  /// @brief Field k_DefaultFlags value: U8(1)
  static ::UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags const k_DefaultFlags;

  /// @brief Field uxmlAssetId, offset: 0x10, size: 0x4, def value: None
  int32_t ___uxmlAssetId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UxmlSerializedData, ___uxmlAssetId) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UxmlSerializedData, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlSerializedData_UxmlAttributeFlags, "UnityEngine.UIElements", "UxmlSerializedData/UxmlAttributeFlags");
NEED_NO_BOX(::UnityEngine::UIElements::UxmlSerializedData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UxmlSerializedData*, "UnityEngine.UIElements", "UxmlSerializedData");
