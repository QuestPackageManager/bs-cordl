#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSemanticLabels.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSemanticLabels)
namespace GlobalNamespace {
template <typename T> class IOVRAnchorComponent_1;
}
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceComponentType;
}
namespace GlobalNamespace {
struct OVRSemanticLabels_Classification;
}
namespace GlobalNamespace {
template <typename TResult> struct OVRTask_1;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRSemanticLabels_Classification;
}
namespace GlobalNamespace {
struct OVRSemanticLabels;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSemanticLabels_Classification);
MARK_VAL_T(::GlobalNamespace::OVRSemanticLabels);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSemanticLabels/Classification
struct CORDL_TYPE OVRSemanticLabels_Classification {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRSemanticLabels_Classification_Unwrapped
  enum struct __OVRSemanticLabels_Classification_Unwrapped : int32_t {
    __E_Floor = static_cast<int32_t>(0x0),
    __E_Ceiling = static_cast<int32_t>(0x1),
    __E_WallFace = static_cast<int32_t>(0x2),
    __E_Table = static_cast<int32_t>(0x3),
    __E_Couch = static_cast<int32_t>(0x4),
    __E_DoorFrame = static_cast<int32_t>(0x5),
    __E_WindowFrame = static_cast<int32_t>(0x6),
    __E_Other = static_cast<int32_t>(0x7),
    __E_Storage = static_cast<int32_t>(0x8),
    __E_Bed = static_cast<int32_t>(0x9),
    __E_Screen = static_cast<int32_t>(0xa),
    __E_Lamp = static_cast<int32_t>(0xb),
    __E_Plant = static_cast<int32_t>(0xc),
    __E_WallArt = static_cast<int32_t>(0xd),
    __E_SceneMesh = static_cast<int32_t>(0xe),
    __E_InvisibleWallFace = static_cast<int32_t>(0xf),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRSemanticLabels_Classification_Unwrapped() const noexcept {
    return static_cast<__OVRSemanticLabels_Classification_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSemanticLabels_Classification();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRSemanticLabels_Classification(int32_t value__) noexcept;

  /// @brief Field Bed value: I32(9)
  static ::GlobalNamespace::OVRSemanticLabels_Classification const Bed;

  /// @brief Field Ceiling value: I32(1)
  static ::GlobalNamespace::OVRSemanticLabels_Classification const Ceiling;

  /// @brief Field Couch value: I32(4)
  static ::GlobalNamespace::OVRSemanticLabels_Classification const Couch;

  /// @brief Field DoorFrame value: I32(5)
  static ::GlobalNamespace::OVRSemanticLabels_Classification const DoorFrame;

  /// @brief Field Floor value: I32(0)
  static ::GlobalNamespace::OVRSemanticLabels_Classification const Floor;

  /// @brief Field InvisibleWallFace value: I32(15)
  static ::GlobalNamespace::OVRSemanticLabels_Classification const InvisibleWallFace;

  /// @brief Field Lamp value: I32(11)
  static ::GlobalNamespace::OVRSemanticLabels_Classification const Lamp;

  /// @brief Field Other value: I32(7)
  static ::GlobalNamespace::OVRSemanticLabels_Classification const Other;

  /// @brief Field Plant value: I32(12)
  static ::GlobalNamespace::OVRSemanticLabels_Classification const Plant;

  /// @brief Field SceneMesh value: I32(14)
  static ::GlobalNamespace::OVRSemanticLabels_Classification const SceneMesh;

  /// @brief Field Screen value: I32(10)
  static ::GlobalNamespace::OVRSemanticLabels_Classification const Screen;

  /// @brief Field Storage value: I32(8)
  static ::GlobalNamespace::OVRSemanticLabels_Classification const Storage;

  /// @brief Field Table value: I32(3)
  static ::GlobalNamespace::OVRSemanticLabels_Classification const Table;

  /// @brief Field WallArt value: I32(13)
  static ::GlobalNamespace::OVRSemanticLabels_Classification const WallArt;

  /// @brief Field WallFace value: I32(2)
  static ::GlobalNamespace::OVRSemanticLabels_Classification const WallFace;

  /// @brief Field WindowFrame value: I32(6)
  static ::GlobalNamespace::OVRSemanticLabels_Classification const WindowFrame;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7088 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSemanticLabels_Classification, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSemanticLabels_Classification, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSemanticLabels
struct CORDL_TYPE OVRSemanticLabels {
public:
  // Declarations
  using Classification = ::GlobalNamespace::OVRSemanticLabels_Classification;

  __declspec(property(get = get_Handle)) uint64_t Handle;

  __declspec(property(get = IOVRAnchorComponent_OVRSemanticLabels__get_Handle)) uint64_t IOVRAnchorComponent_OVRSemanticLabels__Handle;

  __declspec(property(get = IOVRAnchorComponent_OVRSemanticLabels__get_Type)) ::GlobalNamespace::OVRPlugin_SpaceComponentType IOVRAnchorComponent_OVRSemanticLabels__Type;

  __declspec(property(get = get_IsEnabled)) bool IsEnabled;

  __declspec(property(get = get_IsNull)) bool IsNull;

  __declspec(property(get = get_Labels)) ::StringW Labels;

  /// @brief Field Null, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Null, put = setStaticF_Null)) ::GlobalNamespace::OVRSemanticLabels Null;

  __declspec(property(get = get_Type)) ::GlobalNamespace::OVRPlugin_SpaceComponentType Type;

  /// @brief Field _semanticLabelsBuffer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__semanticLabelsBuffer, put = setStaticF__semanticLabelsBuffer)) ::ArrayW<char16_t, ::Array<char16_t>*> _semanticLabelsBuffer;

  /// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRSemanticLabels>"
  constexpr operator ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRSemanticLabels>*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRSemanticLabels>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::OVRSemanticLabels>*();

  /// @brief Method Equals, addr 0x5bff048, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x5bfeef8, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::OVRSemanticLabels other);

  /// @brief Method FromApiLabel, addr 0x5bff798, size 0x8d8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRSemanticLabels_Classification FromApiLabel(::System::ReadOnlySpan_1<char16_t> singleLabel);

  /// @brief Method FromApiString, addr 0x5bff604, size 0x194, virtual false, abstract: false, final false
  static inline void FromApiString(::System::ReadOnlySpan_1<char16_t> apiLabels, ::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSemanticLabels_Classification>* classifications);

  /// @brief Method GetClassifications, addr 0x5bff2fc, size 0x308, virtual false, abstract: false, final false
  inline void GetClassifications(::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSemanticLabels_Classification>* classifications);

  /// @brief Method GetHashCode, addr 0x5bff0d8, size 0x6c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IOVRAnchorComponent<OVRSemanticLabels>.FromAnchor, addr 0x5bfeccc, size 0x30, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRSemanticLabels IOVRAnchorComponent_OVRSemanticLabels__FromAnchor(::GlobalNamespace::OVRAnchor anchor);

  /// @brief Method IOVRAnchorComponent<OVRSemanticLabels>.SetEnabledAsync, addr 0x5bfeeac, size 0x4c, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRTask_1<bool> IOVRAnchorComponent_OVRSemanticLabels__SetEnabledAsync(bool enabled, double_t timeout);

  /// @brief Method IOVRAnchorComponent<OVRSemanticLabels>.get_Handle, addr 0x5bfec74, size 0x58, virtual true, abstract: false, final true
  inline uint64_t IOVRAnchorComponent_OVRSemanticLabels__get_Handle();

  /// @brief Method IOVRAnchorComponent<OVRSemanticLabels>.get_Type, addr 0x5bfec18, size 0x54, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRPlugin_SpaceComponentType IOVRAnchorComponent_OVRSemanticLabels__get_Type();

  /// @brief Method ToApiLabel, addr 0x5c00318, size 0x190, virtual false, abstract: false, final false
  static inline ::StringW ToApiLabel(::GlobalNamespace::OVRSemanticLabels_Classification classification);

  /// @brief Method ToApiString, addr 0x5c004a8, size 0x480, virtual false, abstract: false, final false
  static inline ::StringW ToApiString(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OVRSemanticLabels_Classification>* classifications);

  /// @brief Method ToString, addr 0x5bff144, size 0xc0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method <FromApiString>g__AddLabel|30_0, addr 0x5c00070, size 0x1fc, virtual false, abstract: false, final false
  static inline void _FromApiString_g__AddLabel_30_0(::System::ReadOnlySpan_1<char16_t> label,
                                                     ::System::Collections::Generic::ICollection_1<::GlobalNamespace::OVRSemanticLabels_Classification>* labels);

  /// @brief Method <FromApiString>g__IndexOf|30_1, addr 0x5c0026c, size 0xac, virtual false, abstract: false, final false
  static inline int32_t _FromApiString_g__IndexOf_30_1(::System::ReadOnlySpan_1<char16_t> s, char16_t c, int32_t start);

  /// @brief Method .ctor, addr 0x5bfecfc, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRAnchor anchor);

  static inline ::GlobalNamespace::OVRSemanticLabels getStaticF_Null();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF__semanticLabelsBuffer();

  /// @brief Method get_Handle, addr 0x5bff204, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_Handle();

  /// @brief Method get_IsEnabled, addr 0x5bfedc4, size 0xe8, virtual true, abstract: false, final true
  inline bool get_IsEnabled();

  /// @brief Method get_IsNull, addr 0x5bfed64, size 0x60, virtual true, abstract: false, final true
  inline bool get_IsNull();

  /// @brief Method get_Labels, addr 0x5bff20c, size 0xf0, virtual false, abstract: false, final false
  inline ::StringW get_Labels();

  /// @brief Method get_Type, addr 0x5bfec6c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPlugin_SpaceComponentType get_Type();

  /// @brief Convert to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRSemanticLabels>"
  constexpr ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRSemanticLabels>* i___GlobalNamespace__IOVRAnchorComponent_1___GlobalNamespace__OVRSemanticLabels_();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRSemanticLabels>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::OVRSemanticLabels>* i___System__IEquatable_1___GlobalNamespace__OVRSemanticLabels_();

  /// @brief Method op_Equality, addr 0x5bfef64, size 0x70, virtual false, abstract: false, final false
  static inline bool op_Equality(::GlobalNamespace::OVRSemanticLabels lhs, ::GlobalNamespace::OVRSemanticLabels rhs);

  /// @brief Method op_Inequality, addr 0x5bfefd4, size 0x74, virtual false, abstract: false, final false
  static inline bool op_Inequality(::GlobalNamespace::OVRSemanticLabels lhs, ::GlobalNamespace::OVRSemanticLabels rhs);

  static inline void setStaticF_Null(::GlobalNamespace::OVRSemanticLabels value);

  static inline void setStaticF__semanticLabelsBuffer(::ArrayW<char16_t, ::Array<char16_t>*> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSemanticLabels();

  // Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr OVRSemanticLabels(uint64_t _Handle_k__BackingField) noexcept;

  /// @brief Field DeprecationMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString DeprecationMessage{ u"String-based labels are deprecated (v65). Please use the equivalent enum-based methods." };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7089 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field <Handle>k__BackingField, offset: 0x0, size: 0x8, def value: None
  uint64_t _Handle_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSemanticLabels, _Handle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSemanticLabels, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSemanticLabels_Classification, "", "OVRSemanticLabels/Classification");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSemanticLabels, "", "OVRSemanticLabels");
