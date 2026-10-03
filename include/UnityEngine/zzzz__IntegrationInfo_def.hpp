#pragma once
// IWYU pragma private; include "UnityEngine/IntegrationInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__IntegrationLimits_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IntegrationInfo)
namespace UnityEngine {
struct IntegrationInfo_SupportedUnityFeatures;
}
namespace UnityEngine {
struct IntegrationInfo__m_Desc_e__FixedBuffer;
}
namespace UnityEngine {
struct IntegrationInfo__m_IntegrationVersion_e__FixedBuffer;
}
namespace UnityEngine {
struct IntegrationInfo__m_Name_e__FixedBuffer;
}
namespace UnityEngine {
struct IntegrationInfo__m_SdkVersion_e__FixedBuffer;
}
namespace UnityEngine {
struct IntegrationLimits;
}
// Forward declare root types
namespace UnityEngine {
struct IntegrationInfo_SupportedUnityFeatures;
}
namespace UnityEngine {
struct IntegrationInfo;
}
namespace UnityEngine {
struct IntegrationInfo__m_Desc_e__FixedBuffer;
}
namespace UnityEngine {
struct IntegrationInfo__m_IntegrationVersion_e__FixedBuffer;
}
namespace UnityEngine {
struct IntegrationInfo__m_Name_e__FixedBuffer;
}
namespace UnityEngine {
struct IntegrationInfo__m_SdkVersion_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::IntegrationInfo_SupportedUnityFeatures);
MARK_VAL_T(::UnityEngine::IntegrationInfo);
MARK_VAL_T(::UnityEngine::IntegrationInfo__m_Desc_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::IntegrationInfo__m_IntegrationVersion_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::IntegrationInfo__m_Name_e__FixedBuffer);
MARK_VAL_T(::UnityEngine::IntegrationInfo__m_SdkVersion_e__FixedBuffer);
DEFINE_IL2CPP_CLASS(::UnityEngine::IntegrationInfo_SupportedUnityFeatures, "UnityEngine", "IntegrationInfo/SupportedUnityFeatures");
DEFINE_IL2CPP_CLASS(::UnityEngine::IntegrationInfo, "UnityEngine", "IntegrationInfo");
DEFINE_IL2CPP_CLASS(::UnityEngine::IntegrationInfo__m_Desc_e__FixedBuffer, "UnityEngine", "IntegrationInfo/<m_Desc>e__FixedBuffer");
DEFINE_IL2CPP_CLASS(::UnityEngine::IntegrationInfo__m_IntegrationVersion_e__FixedBuffer, "UnityEngine", "IntegrationInfo/<m_IntegrationVersion>e__FixedBuffer");
DEFINE_IL2CPP_CLASS(::UnityEngine::IntegrationInfo__m_Name_e__FixedBuffer, "UnityEngine", "IntegrationInfo/<m_Name>e__FixedBuffer");
DEFINE_IL2CPP_CLASS(::UnityEngine::IntegrationInfo__m_SdkVersion_e__FixedBuffer, "UnityEngine", "IntegrationInfo/<m_SdkVersion>e__FixedBuffer");
// [Flags]
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19073 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::IntegrationInfo_SupportedUnityFeatures, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::IntegrationInfo_SupportedUnityFeatures) == 0x4, "Size mismatch!");

} // namespace UnityEngine
// [UnsafeValueType]
// [CompilerGenerated]
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

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
  constexpr IntegrationInfo__m_Desc_e__FixedBuffer(uint8_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19074 };

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

static_assert(sizeof(::UnityEngine::IntegrationInfo__m_Desc_e__FixedBuffer) == 0xdc, "Size mismatch!");

} // namespace UnityEngine
// [CompilerGenerated]
// [UnsafeValueType]
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.IntegrationInfo/<m_IntegrationVersion>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE IntegrationInfo__m_IntegrationVersion_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntegrationInfo__m_IntegrationVersion_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint16_t", modifiers: "", def_value: None, comment: None }]
  constexpr IntegrationInfo__m_IntegrationVersion_e__FixedBuffer(uint16_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19075 };

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
static_assert(offsetof(::UnityEngine::IntegrationInfo__m_IntegrationVersion_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::IntegrationInfo__m_IntegrationVersion_e__FixedBuffer) == 0x6, "Size mismatch!");

} // namespace UnityEngine
// [UnsafeValueType]
// [CompilerGenerated]
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

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
  constexpr IntegrationInfo__m_Name_e__FixedBuffer(uint8_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19076 };

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

static_assert(sizeof(::UnityEngine::IntegrationInfo__m_Name_e__FixedBuffer) == 0x10, "Size mismatch!");

} // namespace UnityEngine
// [CompilerGenerated]
// [UnsafeValueType]
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.IntegrationInfo/<m_SdkVersion>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE IntegrationInfo__m_SdkVersion_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntegrationInfo__m_SdkVersion_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint16_t", modifiers: "", def_value: None, comment: None }]
  constexpr IntegrationInfo__m_SdkVersion_e__FixedBuffer(uint16_t FixedElementField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19077 };

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
static_assert(offsetof(::UnityEngine::IntegrationInfo__m_SdkVersion_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::IntegrationInfo__m_SdkVersion_e__FixedBuffer) == 0x6, "Size mismatch!");

} // namespace UnityEngine
// Dependencies UnityEngine.IntegrationInfo::<m_Desc>e__FixedBuffer, UnityEngine.IntegrationInfo::<m_IntegrationVersion>e__FixedBuffer, UnityEngine.IntegrationInfo::<m_Name>e__FixedBuffer,
// UnityEngine.IntegrationInfo::<m_SdkVersion>e__FixedBuffer, UnityEngine.IntegrationInfo::SupportedUnityFeatures, UnityEngine.IntegrationLimits
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.IntegrationInfo
struct CORDL_TYPE IntegrationInfo {
public:
  // Declarations
  using SupportedUnityFeatures = ::UnityEngine::IntegrationInfo_SupportedUnityFeatures;

  using _m_Desc_e__FixedBuffer = ::UnityEngine::IntegrationInfo__m_Desc_e__FixedBuffer;

  using _m_IntegrationVersion_e__FixedBuffer = ::UnityEngine::IntegrationInfo__m_IntegrationVersion_e__FixedBuffer;

  using _m_Name_e__FixedBuffer = ::UnityEngine::IntegrationInfo__m_Name_e__FixedBuffer;

  using _m_SdkVersion_e__FixedBuffer = ::UnityEngine::IntegrationInfo__m_SdkVersion_e__FixedBuffer;

  __declspec(property(get = get_description)) ::StringW description;

  __declspec(property(get = get_id)) uint32_t id;

  __declspec(property(get = get_isExperimental)) bool isExperimental;

  __declspec(property(get = get_isFallback)) bool isFallback;

  __declspec(property(get = get_limit)) ::UnityEngine::IntegrationLimits limit;

  /// @brief Field m_Desc, offset 0x24, size 0xdc
  __declspec(property(get = __cordl_internal_get_m_Desc, put = __cordl_internal_set_m_Desc)) ::UnityEngine::IntegrationInfo__m_Desc_e__FixedBuffer m_Desc;

  /// @brief Field m_Features, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Features, put = __cordl_internal_set_m_Features)) ::UnityEngine::IntegrationInfo_SupportedUnityFeatures m_Features;

  /// @brief Field m_Id, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Id, put = __cordl_internal_set_m_Id)) uint32_t m_Id;

  /// @brief Field m_IntegrationVersion, offset 0x4, size 0x6
  __declspec(property(get = __cordl_internal_get_m_IntegrationVersion,
                      put = __cordl_internal_set_m_IntegrationVersion)) ::UnityEngine::IntegrationInfo__m_IntegrationVersion_e__FixedBuffer m_IntegrationVersion;

  /// @brief Field m_Limit, offset 0x100, size 0x38
  __declspec(property(get = __cordl_internal_get_m_Limit, put = __cordl_internal_set_m_Limit)) ::UnityEngine::IntegrationLimits m_Limit;

  /// @brief Field m_Name, offset 0x14, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Name, put = __cordl_internal_set_m_Name)) ::UnityEngine::IntegrationInfo__m_Name_e__FixedBuffer m_Name;

  /// @brief Field m_SdkVersion, offset 0xa, size 0x6
  __declspec(property(get = __cordl_internal_get_m_SdkVersion, put = __cordl_internal_set_m_SdkVersion)) ::UnityEngine::IntegrationInfo__m_SdkVersion_e__FixedBuffer m_SdkVersion;

  __declspec(property(get = get_majorVersion)) uint16_t majorVersion;

  __declspec(property(get = get_minorVersion)) uint16_t minorVersion;

  __declspec(property(get = get_name)) ::StringW name;

  __declspec(property(get = get_patchVersion)) uint16_t patchVersion;

  __declspec(property(get = get_sDKMajorVersion)) uint16_t sDKMajorVersion;

  __declspec(property(get = get_sDKMinorVersion)) uint16_t sDKMinorVersion;

  __declspec(property(get = get_sDKPatchVersion)) uint16_t sDKPatchVersion;

  constexpr ::UnityEngine::IntegrationInfo__m_Desc_e__FixedBuffer const& __cordl_internal_get_m_Desc() const;

  constexpr ::UnityEngine::IntegrationInfo__m_Desc_e__FixedBuffer& __cordl_internal_get_m_Desc();

  constexpr ::UnityEngine::IntegrationInfo_SupportedUnityFeatures const& __cordl_internal_get_m_Features() const;

  constexpr ::UnityEngine::IntegrationInfo_SupportedUnityFeatures& __cordl_internal_get_m_Features();

  constexpr uint32_t const& __cordl_internal_get_m_Id() const;

  constexpr uint32_t& __cordl_internal_get_m_Id();

  constexpr ::UnityEngine::IntegrationInfo__m_IntegrationVersion_e__FixedBuffer const& __cordl_internal_get_m_IntegrationVersion() const;

  constexpr ::UnityEngine::IntegrationInfo__m_IntegrationVersion_e__FixedBuffer& __cordl_internal_get_m_IntegrationVersion();

  constexpr ::UnityEngine::IntegrationLimits const& __cordl_internal_get_m_Limit() const;

  constexpr ::UnityEngine::IntegrationLimits& __cordl_internal_get_m_Limit();

  constexpr ::UnityEngine::IntegrationInfo__m_Name_e__FixedBuffer const& __cordl_internal_get_m_Name() const;

  constexpr ::UnityEngine::IntegrationInfo__m_Name_e__FixedBuffer& __cordl_internal_get_m_Name();

  constexpr ::UnityEngine::IntegrationInfo__m_SdkVersion_e__FixedBuffer const& __cordl_internal_get_m_SdkVersion() const;

  constexpr ::UnityEngine::IntegrationInfo__m_SdkVersion_e__FixedBuffer& __cordl_internal_get_m_SdkVersion();

  constexpr void __cordl_internal_set_m_Desc(::UnityEngine::IntegrationInfo__m_Desc_e__FixedBuffer value);

  constexpr void __cordl_internal_set_m_Features(::UnityEngine::IntegrationInfo_SupportedUnityFeatures value);

  constexpr void __cordl_internal_set_m_Id(uint32_t value);

  constexpr void __cordl_internal_set_m_IntegrationVersion(::UnityEngine::IntegrationInfo__m_IntegrationVersion_e__FixedBuffer value);

  constexpr void __cordl_internal_set_m_Limit(::UnityEngine::IntegrationLimits value);

  constexpr void __cordl_internal_set_m_Name(::UnityEngine::IntegrationInfo__m_Name_e__FixedBuffer value);

  constexpr void __cordl_internal_set_m_SdkVersion(::UnityEngine::IntegrationInfo__m_SdkVersion_e__FixedBuffer value);

  /// @brief Method get_description, addr 0x6ffe7c4, size 0x58, virtual false, abstract: false, final false
  inline ::StringW get_description();

  /// [IsReadOnly]
  /// @brief Method get_id, addr 0x6ffe764, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_id();

  /// @brief Method get_isExperimental, addr 0x6ffe864, size 0x10, virtual false, abstract: false, final false
  inline bool get_isExperimental();

  /// @brief Method get_isFallback, addr 0x6ffe84c, size 0x18, virtual false, abstract: false, final false
  inline bool get_isFallback();

  /// @brief Method get_limit, addr 0x6ffe874, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::IntegrationLimits get_limit();

  /// @brief Method get_majorVersion, addr 0x6ffe834, size 0x8, virtual false, abstract: false, final false
  inline uint16_t get_majorVersion();

  /// @brief Method get_minorVersion, addr 0x6ffe83c, size 0x8, virtual false, abstract: false, final false
  inline uint16_t get_minorVersion();

  /// @brief Method get_name, addr 0x6ffe76c, size 0x58, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method get_patchVersion, addr 0x6ffe844, size 0x8, virtual false, abstract: false, final false
  inline uint16_t get_patchVersion();

  /// @brief Method get_sDKMajorVersion, addr 0x6ffe81c, size 0x8, virtual false, abstract: false, final false
  inline uint16_t get_sDKMajorVersion();

  /// @brief Method get_sDKMinorVersion, addr 0x6ffe824, size 0x8, virtual false, abstract: false, final false
  inline uint16_t get_sDKMinorVersion();

  /// @brief Method get_sDKPatchVersion, addr 0x6ffe82c, size 0x8, virtual false, abstract: false, final false
  inline uint16_t get_sDKPatchVersion();

  // Ctor Parameters []
  // @brief default ctor
  constexpr IntegrationInfo();

  // Ctor Parameters [CppParam { name: "m_Id", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_IntegrationVersion", ty:
  // "::UnityEngine::IntegrationInfo__m_IntegrationVersion_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_SdkVersion", ty:
  // "::UnityEngine::IntegrationInfo__m_SdkVersion_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Features", ty:
  // "::UnityEngine::IntegrationInfo_SupportedUnityFeatures", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Name", ty: "::UnityEngine::IntegrationInfo__m_Name_e__FixedBuffer",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Desc", ty: "::UnityEngine::IntegrationInfo__m_Desc_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam
  // { name: "m_Limit", ty: "::UnityEngine::IntegrationLimits", modifiers: "", def_value: None, comment: None }]
  constexpr IntegrationInfo(uint32_t m_Id, ::UnityEngine::IntegrationInfo__m_IntegrationVersion_e__FixedBuffer m_IntegrationVersion,
                            ::UnityEngine::IntegrationInfo__m_SdkVersion_e__FixedBuffer m_SdkVersion, ::UnityEngine::IntegrationInfo_SupportedUnityFeatures m_Features,
                            ::UnityEngine::IntegrationInfo__m_Name_e__FixedBuffer m_Name, ::UnityEngine::IntegrationInfo__m_Desc_e__FixedBuffer m_Desc,
                            ::UnityEngine::IntegrationLimits m_Limit) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___m_Id_padding[0x0];
      /// @brief Field m_Id, offset: 0x0, size: 0x4, def value: None
      uint32_t ___m_Id;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___m_Id_padding_forAlignment[0x0];
      /// @brief Field m_Id, offset: 0x0, size: 0x4, def value: None
      uint32_t ___m_Id_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x4
      uint8_t ___m_IntegrationVersion_padding[0x4];
      /// [FixedBuffer(typeof(System.UInt16), 3)]
      /// @brief Field m_IntegrationVersion, offset: 0x4, size: 0x6, def value: None
      ::UnityEngine::IntegrationInfo__m_IntegrationVersion_e__FixedBuffer ___m_IntegrationVersion;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x4 for alignment
      uint8_t ___m_IntegrationVersion_padding_forAlignment[0x4];
      /// [FixedBuffer(typeof(System.UInt16), 3)]
      /// @brief Field m_IntegrationVersion, offset: 0x4, size: 0x6, def value: None
      ::UnityEngine::IntegrationInfo__m_IntegrationVersion_e__FixedBuffer ___m_IntegrationVersion_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xa
      uint8_t ___m_SdkVersion_padding[0xa];
      /// [FixedBuffer(typeof(System.UInt16), 3)]
      /// @brief Field m_SdkVersion, offset: 0xa, size: 0x6, def value: None
      ::UnityEngine::IntegrationInfo__m_SdkVersion_e__FixedBuffer ___m_SdkVersion;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xa for alignment
      uint8_t ___m_SdkVersion_padding_forAlignment[0xa];
      /// [FixedBuffer(typeof(System.UInt16), 3)]
      /// @brief Field m_SdkVersion, offset: 0xa, size: 0x6, def value: None
      ::UnityEngine::IntegrationInfo__m_SdkVersion_e__FixedBuffer ___m_SdkVersion_forAlignment;
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
      /// [FixedBuffer(typeof(System.Byte), 16)]
      /// @brief Field m_Name, offset: 0x14, size: 0x10, def value: None
      ::UnityEngine::IntegrationInfo__m_Name_e__FixedBuffer ___m_Name;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x14 for alignment
      uint8_t ___m_Name_padding_forAlignment[0x14];
      /// [FixedBuffer(typeof(System.Byte), 16)]
      /// @brief Field m_Name, offset: 0x14, size: 0x10, def value: None
      ::UnityEngine::IntegrationInfo__m_Name_e__FixedBuffer ___m_Name_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x24
      uint8_t ___m_Desc_padding[0x24];
      /// [FixedBuffer(typeof(System.Byte), 220)]
      /// @brief Field m_Desc, offset: 0x24, size: 0xdc, def value: None
      ::UnityEngine::IntegrationInfo__m_Desc_e__FixedBuffer ___m_Desc;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x24 for alignment
      uint8_t ___m_Desc_padding_forAlignment[0x24];
      /// [FixedBuffer(typeof(System.Byte), 220)]
      /// @brief Field m_Desc, offset: 0x24, size: 0xdc, def value: None
      ::UnityEngine::IntegrationInfo__m_Desc_e__FixedBuffer ___m_Desc_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x100
      uint8_t ___m_Limit_padding[0x100];
      /// @brief Field m_Limit, offset: 0x100, size: 0x38, def value: None
      ::UnityEngine::IntegrationLimits ___m_Limit;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x100 for alignment
      uint8_t ___m_Limit_padding_forAlignment[0x100];
      /// @brief Field m_Limit, offset: 0x100, size: 0x38, def value: None
      ::UnityEngine::IntegrationLimits ___m_Limit_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19078 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x138 };

  /// @brief Field k_FallbackIntegrationId offset 0xffffffff size 0x4
  static constexpr uint32_t k_FallbackIntegrationId{ static_cast<uint32_t>(0xdecafbadu) };

  /// @brief Field k_InvalidID offset 0xffffffff size 0x4
  static constexpr uint32_t k_InvalidID{ static_cast<uint32_t>(0x0u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::IntegrationInfo) == 0x138, "Size mismatch!");

} // namespace UnityEngine
