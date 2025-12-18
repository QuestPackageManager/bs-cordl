#pragma once
// IWYU pragma private; include "GlobalNamespace/LightConstants.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightConstants)
namespace GlobalNamespace {
struct LightConstants_BakeId;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct LightConstants_BakeId;
}
namespace GlobalNamespace {
class LightConstants;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LightConstants_BakeId);
MARK_REF_PTR_T(::GlobalNamespace::LightConstants);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: LightConstants/BakeId
struct CORDL_TYPE LightConstants_BakeId {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LightConstants_BakeId_Unwrapped
  enum struct __LightConstants_BakeId_Unwrapped : int32_t {
    __E_A = static_cast<int32_t>(0x1),
    __E_B = static_cast<int32_t>(0x2),
    __E_C = static_cast<int32_t>(0x3),
    __E_D = static_cast<int32_t>(0x4),
    __E_E = static_cast<int32_t>(0x5),
    __E_F = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LightConstants_BakeId_Unwrapped() const noexcept {
    return static_cast<__LightConstants_BakeId_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LightConstants_BakeId();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LightConstants_BakeId(int32_t value__) noexcept;

  /// @brief Field A value: I32(1)
  static ::GlobalNamespace::LightConstants_BakeId const A;

  /// @brief Field B value: I32(2)
  static ::GlobalNamespace::LightConstants_BakeId const B;

  /// @brief Field C value: I32(3)
  static ::GlobalNamespace::LightConstants_BakeId const C;

  /// @brief Field D value: I32(4)
  static ::GlobalNamespace::LightConstants_BakeId const D;

  /// @brief Field E value: I32(5)
  static ::GlobalNamespace::LightConstants_BakeId const E;

  /// @brief Field F value: I32(6)
  static ::GlobalNamespace::LightConstants_BakeId const F;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19723 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightConstants_BakeId, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightConstants_BakeId, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightConstants
class CORDL_TYPE LightConstants : public ::System::Object {
public:
  // Declarations
  using BakeId = ::GlobalNamespace::LightConstants_BakeId;

  /// @brief Field allBakeIds, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_allBakeIds, put = setStaticF_allBakeIds)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightConstants_BakeId>* allBakeIds;

  /// @brief Method GetComputeFieldPropertyId, addr 0x56b9d40, size 0x54, virtual false, abstract: false, final false
  static inline int32_t GetComputeFieldPropertyId(::StringW fieldName);

  /// @brief Method GetLightProbeLightBakeIdPropertyId, addr 0x56b9c74, size 0xcc, virtual false, abstract: false, final false
  static inline int32_t GetLightProbeLightBakeIdPropertyId(::GlobalNamespace::LightConstants_BakeId bakeId);

  /// @brief Method GetLightmapLightBakeIdPropertyId, addr 0x56b9ba8, size 0xcc, virtual false, abstract: false, final false
  static inline int32_t GetLightmapLightBakeIdPropertyId(::GlobalNamespace::LightConstants_BakeId bakeId);

  static inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightConstants_BakeId>* getStaticF_allBakeIds();

  static inline void setStaticF_allBakeIds(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::LightConstants_BakeId>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightConstants();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightConstants", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightConstants(LightConstants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightConstants", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightConstants(LightConstants const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19724 };

  /// @brief Field kBaseLightId offset 0xffffffff size 0x4
  static constexpr int32_t kBaseLightId{ static_cast<int32_t>(0x19) };

  /// @brief Field kLightProbeLightBakeIdPrefix offset 0xffffffff size 0x8
  static constexpr ::ConstString kLightProbeLightBakeIdPrefix{ u"_LightProbeLightBakeId" };

  /// @brief Field kLightmapLightBakeIdPrefix offset 0xffffffff size 0x8
  static constexpr ::ConstString kLightmapLightBakeIdPrefix{ u"_LightmapLightBakeId" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightConstants, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightConstants_BakeId, "", "LightConstants/BakeId");
NEED_NO_BOX(::GlobalNamespace::LightConstants);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightConstants*, "", "LightConstants");
