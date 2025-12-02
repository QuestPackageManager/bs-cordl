#pragma once
// IWYU pragma private; include "UnityEngine/IntegrationInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IntegrationInfo)
namespace UnityEngine {
struct IntegrationInfo_SupportedUnityFeatures;
}
namespace UnityEngine {
struct IntegrationInfo__IntegrationVersion_e__FixedBuffer;
}
namespace UnityEngine {
struct IntegrationInfo__SdkVersion_e__FixedBuffer;
}
namespace UnityEngine {
struct IntegrationInfo__m_Desc_e__FixedBuffer;
}
namespace UnityEngine {
struct IntegrationInfo__m_Name_e__FixedBuffer;
}
// Forward declare root types
namespace UnityEngine {
struct IntegrationInfo_SupportedUnityFeatures;
}
namespace UnityEngine {
struct IntegrationInfo;
}
namespace UnityEngine {
struct IntegrationInfo__IntegrationVersion_e__FixedBuffer;
}
namespace UnityEngine {
struct IntegrationInfo__SdkVersion_e__FixedBuffer;
}
namespace UnityEngine {
struct IntegrationInfo__m_Desc_e__FixedBuffer;
}
namespace UnityEngine {
struct IntegrationInfo__m_Name_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::IntegrationInfo_SupportedUnityFeatures);
MARK_VAL_T(::UnityEngine::IntegrationInfo);
MARK_VAL_T(::UnityEngine::IntegrationInfo__IntegrationVersion_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::IntegrationInfo__SdkVersion_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::IntegrationInfo__m_Desc_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::IntegrationInfo__m_Name_e__FixedBuffer);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.IntegrationInfo/SupportedUnityFeatures
struct CORDL_TYPE IntegrationInfo_SupportedUnityFeatures {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __IntegrationInfo_SupportedUnityFeatures_Unwrapped
  enum struct __IntegrationInfo_SupportedUnityFeatures_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_DynamicsSupport = static_cast<int32_t>(0x2),
    __E_SDKVisualDebuggerSupport = static_cast<int32_t>(0x4),
    __E_ArticulationSupport = static_cast<int32_t>(0x8),
    __E_ImmediateModeSupport = static_cast<int32_t>(0x10),
    __E_VehicleSupport = static_cast<int32_t>(0x20),
    __E_CharacterControllerSupport = static_cast<int32_t>(0x40),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __IntegrationInfo_SupportedUnityFeatures_Unwrapped() const noexcept {
    return static_cast<__IntegrationInfo_SupportedUnityFeatures_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr IntegrationInfo_SupportedUnityFeatures();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr IntegrationInfo_SupportedUnityFeatures(int32_t value__) noexcept;

  /// @brief Field ArticulationSupport value: I32(8)
  static ::UnityEngine::IntegrationInfo_SupportedUnityFeatures const ArticulationSupport;

  /// @brief Field CharacterControllerSupport value: I32(64)
  static ::UnityEngine::IntegrationInfo_SupportedUnityFeatures const CharacterControllerSupport;

  /// @brief Field DynamicsSupport value: I32(2)
  static ::UnityEngine::IntegrationInfo_SupportedUnityFeatures const DynamicsSupport;

  /// @brief Field ImmediateModeSupport value: I32(16)
  static ::UnityEngine::IntegrationInfo_SupportedUnityFeatures const ImmediateModeSupport;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::IntegrationInfo_SupportedUnityFeatures const None;

  /// @brief Field SDKVisualDebuggerSupport value: I32(4)
  static ::UnityEngine::IntegrationInfo_SupportedUnityFeatures const SDKVisualDebuggerSupport;

  /// @brief Field VehicleSupport value: I32(32)
  static ::UnityEngine::IntegrationInfo_SupportedUnityFeatures const VehicleSupport;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18610 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::IntegrationInfo_SupportedUnityFeatures, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::IntegrationInfo_SupportedUnityFeatures, 0x4>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.IntegrationInfo/<IntegrationVersion>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE IntegrationInfo__IntegrationVersion_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntegrationInfo__IntegrationVersion_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr IntegrationInfo__IntegrationVersion_e__FixedBuffer(uint16_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18611 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x6 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x2, def value: None
  uint16_t FixedElementField;

  /// @brief Size padding 0x6 - 0x2 = 0x4, packed as 0x4
  uint8_t _cordl_size_padding[0x4];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::IntegrationInfo__IntegrationVersion_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::IntegrationInfo__IntegrationVersion_e__FixedBuffer, 0x6>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.IntegrationInfo/<SdkVersion>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE IntegrationInfo__SdkVersion_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntegrationInfo__SdkVersion_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr IntegrationInfo__SdkVersion_e__FixedBuffer(uint16_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18612 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x6 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x2, def value: None
  uint16_t FixedElementField;

  /// @brief Size padding 0x6 - 0x2 = 0x4, packed as 0x4
  uint8_t _cordl_size_padding[0x4];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::IntegrationInfo__SdkVersion_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::IntegrationInfo__SdkVersion_e__FixedBuffer, 0x6>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.IntegrationInfo/<m_Desc>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE IntegrationInfo__m_Desc_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntegrationInfo__m_Desc_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr IntegrationInfo__m_Desc_e__FixedBuffer(uint8_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18613 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xdc };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
  uint8_t FixedElementField;

  /// @brief Size padding 0xdc - 0x1 = 0xdb, packed as 0xdb
  uint8_t _cordl_size_padding[0xdb];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::IntegrationInfo__m_Desc_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::IntegrationInfo__m_Desc_e__FixedBuffer, 0xdc>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.IntegrationInfo/<m_Name>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE IntegrationInfo__m_Name_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntegrationInfo__m_Name_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr IntegrationInfo__m_Name_e__FixedBuffer(uint8_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18614 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field FixedElementField, offset: 0x0, size: 0x1, def value: None
  uint8_t FixedElementField;

  /// @brief Size padding 0x10 - 0x1 = 0xf, packed as 0xf
  uint8_t _cordl_size_padding[0xf];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::IntegrationInfo__m_Name_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::IntegrationInfo__m_Name_e__FixedBuffer, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.IntegrationInfo::<IntegrationVersion>e__FixedBuffer, UnityEngine.IntegrationInfo::<SdkVersion>e__FixedBuffer, UnityEngine.IntegrationInfo::<m_Desc>e__FixedBuffer,
// UnityEngine.IntegrationInfo::<m_Name>e__FixedBuffer, UnityEngine.IntegrationInfo::SupportedUnityFeatures
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.IntegrationInfo
struct CORDL_TYPE IntegrationInfo {
public:
  // Declarations
  using SupportedUnityFeatures = ::UnityEngine::IntegrationInfo_SupportedUnityFeatures;

  using _IntegrationVersion_e__FixedBuffer = ::UnityEngine::IntegrationInfo__IntegrationVersion_e__FixedBuffer;

  using _SdkVersion_e__FixedBuffer = ::UnityEngine::IntegrationInfo__SdkVersion_e__FixedBuffer;

  using _m_Desc_e__FixedBuffer = ::UnityEngine::IntegrationInfo__m_Desc_e__FixedBuffer;

  using _m_Name_e__FixedBuffer = ::UnityEngine::IntegrationInfo__m_Name_e__FixedBuffer;

  __declspec(property(get = get_Description)) ::StringW Description;

  /// @brief Field Id, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_Id, put = __cordl_internal_set_Id)) uint32_t Id;

  /// @brief Field IntegrationVersion, offset 0x4, size 0x6
  __declspec(property(get = __cordl_internal_get_IntegrationVersion,
                      put = __cordl_internal_set_IntegrationVersion)) ::UnityEngine::IntegrationInfo__IntegrationVersion_e__FixedBuffer IntegrationVersion;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field SdkVersion, offset 0xa, size 0x6
  __declspec(property(get = __cordl_internal_get_SdkVersion, put = __cordl_internal_set_SdkVersion)) ::UnityEngine::IntegrationInfo__SdkVersion_e__FixedBuffer SdkVersion;

  /// @brief Field m_Desc, offset 0x24, size 0xdc
  __declspec(property(get = __cordl_internal_get_m_Desc, put = __cordl_internal_set_m_Desc)) ::UnityEngine::IntegrationInfo__m_Desc_e__FixedBuffer m_Desc;

  /// @brief Field m_Features, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Features, put = __cordl_internal_set_m_Features)) ::UnityEngine::IntegrationInfo_SupportedUnityFeatures m_Features;

  /// @brief Field m_Name, offset 0x14, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Name, put = __cordl_internal_set_m_Name)) ::UnityEngine::IntegrationInfo__m_Name_e__FixedBuffer m_Name;

  constexpr uint32_t const& __cordl_internal_get_Id() const;

  constexpr uint32_t& __cordl_internal_get_Id();

  constexpr ::UnityEngine::IntegrationInfo__IntegrationVersion_e__FixedBuffer const& __cordl_internal_get_IntegrationVersion() const;

  constexpr ::UnityEngine::IntegrationInfo__IntegrationVersion_e__FixedBuffer& __cordl_internal_get_IntegrationVersion();

  constexpr ::UnityEngine::IntegrationInfo__SdkVersion_e__FixedBuffer const& __cordl_internal_get_SdkVersion() const;

  constexpr ::UnityEngine::IntegrationInfo__SdkVersion_e__FixedBuffer& __cordl_internal_get_SdkVersion();

  constexpr ::UnityEngine::IntegrationInfo__m_Desc_e__FixedBuffer const& __cordl_internal_get_m_Desc() const;

  constexpr ::UnityEngine::IntegrationInfo__m_Desc_e__FixedBuffer& __cordl_internal_get_m_Desc();

  constexpr ::UnityEngine::IntegrationInfo_SupportedUnityFeatures const& __cordl_internal_get_m_Features() const;

  constexpr ::UnityEngine::IntegrationInfo_SupportedUnityFeatures& __cordl_internal_get_m_Features();

  constexpr ::UnityEngine::IntegrationInfo__m_Name_e__FixedBuffer const& __cordl_internal_get_m_Name() const;

  constexpr ::UnityEngine::IntegrationInfo__m_Name_e__FixedBuffer& __cordl_internal_get_m_Name();

  constexpr void __cordl_internal_set_Id(uint32_t value);

  constexpr void __cordl_internal_set_IntegrationVersion(::UnityEngine::IntegrationInfo__IntegrationVersion_e__FixedBuffer value);

  constexpr void __cordl_internal_set_SdkVersion(::UnityEngine::IntegrationInfo__SdkVersion_e__FixedBuffer value);

  constexpr void __cordl_internal_set_m_Desc(::UnityEngine::IntegrationInfo__m_Desc_e__FixedBuffer value);

  constexpr void __cordl_internal_set_m_Features(::UnityEngine::IntegrationInfo_SupportedUnityFeatures value);

  constexpr void __cordl_internal_set_m_Name(::UnityEngine::IntegrationInfo__m_Name_e__FixedBuffer value);

  /// @brief Method get_Description, addr 0x695eb18, size 0x58, virtual false, abstract: false, final false
  inline ::StringW get_Description();

  /// @brief Method get_Name, addr 0x695eac0, size 0x58, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  // Ctor Parameters []
  // @brief default ctor
  constexpr IntegrationInfo();

  // Ctor Parameters [CppParam { name: "Id", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "IntegrationVersion", ty:
  // "::UnityEngine::IntegrationInfo__IntegrationVersion_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "SdkVersion", ty:
  // "::UnityEngine::IntegrationInfo__SdkVersion_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "m_Features", ty: "::UnityEngine::IntegrationInfo_SupportedUnityFeatures",
  // modifiers: "", def_value: None }, CppParam { name: "m_Name", ty: "::UnityEngine::IntegrationInfo__m_Name_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "m_Desc", ty:
  // "::UnityEngine::IntegrationInfo__m_Desc_e__FixedBuffer", modifiers: "", def_value: None }]
  constexpr IntegrationInfo(uint32_t Id, ::UnityEngine::IntegrationInfo__IntegrationVersion_e__FixedBuffer IntegrationVersion, ::UnityEngine::IntegrationInfo__SdkVersion_e__FixedBuffer SdkVersion,
                            ::UnityEngine::IntegrationInfo_SupportedUnityFeatures m_Features, ::UnityEngine::IntegrationInfo__m_Name_e__FixedBuffer m_Name,
                            ::UnityEngine::IntegrationInfo__m_Desc_e__FixedBuffer m_Desc) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___Id_padding[0x0];
      /// @brief Field Id, offset: 0x0, size: 0x4, def value: None
      uint32_t ___Id;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___Id_padding_forAlignment[0x0];
      /// @brief Field Id, offset: 0x0, size: 0x4, def value: None
      uint32_t ___Id_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___IntegrationVersion_padding[0x4];
      /// @brief Field IntegrationVersion, offset: 0x4, size: 0x6, def value: None
      ::UnityEngine::IntegrationInfo__IntegrationVersion_e__FixedBuffer ___IntegrationVersion;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___IntegrationVersion_padding_forAlignment[0x4];
      /// @brief Field IntegrationVersion, offset: 0x4, size: 0x6, def value: None
      ::UnityEngine::IntegrationInfo__IntegrationVersion_e__FixedBuffer ___IntegrationVersion_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xa
      uint8_t ___SdkVersion_padding[0xa];
      /// @brief Field SdkVersion, offset: 0xa, size: 0x6, def value: None
      ::UnityEngine::IntegrationInfo__SdkVersion_e__FixedBuffer ___SdkVersion;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xa for alignment
      uint8_t ___SdkVersion_padding_forAlignment[0xa];
      /// @brief Field SdkVersion, offset: 0xa, size: 0x6, def value: None
      ::UnityEngine::IntegrationInfo__SdkVersion_e__FixedBuffer ___SdkVersion_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___m_Features_padding[0x10];
      /// @brief Field m_Features, offset: 0x10, size: 0x4, def value: None
      ::UnityEngine::IntegrationInfo_SupportedUnityFeatures ___m_Features;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___m_Features_padding_forAlignment[0x10];
      /// @brief Field m_Features, offset: 0x10, size: 0x4, def value: None
      ::UnityEngine::IntegrationInfo_SupportedUnityFeatures ___m_Features_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x14
      uint8_t ___m_Name_padding[0x14];
      /// @brief Field m_Name, offset: 0x14, size: 0x10, def value: None
      ::UnityEngine::IntegrationInfo__m_Name_e__FixedBuffer ___m_Name;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x14 for alignment
      uint8_t ___m_Name_padding_forAlignment[0x14];
      /// @brief Field m_Name, offset: 0x14, size: 0x10, def value: None
      ::UnityEngine::IntegrationInfo__m_Name_e__FixedBuffer ___m_Name_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x24
      uint8_t ___m_Desc_padding[0x24];
      /// @brief Field m_Desc, offset: 0x24, size: 0xdc, def value: None
      ::UnityEngine::IntegrationInfo__m_Desc_e__FixedBuffer ___m_Desc;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x24 for alignment
      uint8_t ___m_Desc_padding_forAlignment[0x24];
      /// @brief Field m_Desc, offset: 0x24, size: 0xdc, def value: None
      ::UnityEngine::IntegrationInfo__m_Desc_e__FixedBuffer ___m_Desc_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18615 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x100 };

  /// @brief Field k_FallbackIntegrationId offset 0xffffffff size 0x4
  static constexpr uint32_t k_FallbackIntegrationId{ static_cast<uint32_t>(0xdecafbadu) };

  /// @brief Field k_InvalidID offset 0xffffffff size 0x4
  static constexpr uint32_t k_InvalidID{ static_cast<uint32_t>(0x0u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::IntegrationInfo, 0x100>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::IntegrationInfo_SupportedUnityFeatures, "UnityEngine", "IntegrationInfo/SupportedUnityFeatures");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::IntegrationInfo, "UnityEngine", "IntegrationInfo");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::IntegrationInfo__IntegrationVersion_e__FixedBuffer, "UnityEngine", "IntegrationInfo/<IntegrationVersion>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::IntegrationInfo__SdkVersion_e__FixedBuffer, "UnityEngine", "IntegrationInfo/<SdkVersion>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::IntegrationInfo__m_Desc_e__FixedBuffer, "UnityEngine", "IntegrationInfo/<m_Desc>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::IntegrationInfo__m_Name_e__FixedBuffer, "UnityEngine", "IntegrationInfo/<m_Name>e__FixedBuffer");
