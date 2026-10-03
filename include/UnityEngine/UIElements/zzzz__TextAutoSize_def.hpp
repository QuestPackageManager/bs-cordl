#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextAutoSize.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextAutoSizeMode_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextAutoSize)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
class PropertyBag_TextAutoSize_MaxSizeProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_TextAutoSize_MinSizeProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_TextAutoSize_ModeProperty;
}
namespace UnityEngine::UIElements {
struct TextAutoSizeMode;
}
namespace UnityEngine::UIElements {
class TextAutoSize_PropertyBag;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PropertyBag_TextAutoSize_MaxSizeProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_TextAutoSize_MinSizeProperty;
}
namespace UnityEngine::UIElements {
class PropertyBag_TextAutoSize_ModeProperty;
}
namespace UnityEngine::UIElements {
class TextAutoSize_PropertyBag;
}
namespace UnityEngine::UIElements {
struct TextAutoSize;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::PropertyBag_TextAutoSize_MaxSizeProperty*);
MARK_REF_T(::UnityEngine::UIElements::PropertyBag_TextAutoSize_MinSizeProperty*);
MARK_REF_T(::UnityEngine::UIElements::PropertyBag_TextAutoSize_ModeProperty*);
MARK_REF_T(::UnityEngine::UIElements::TextAutoSize_PropertyBag*);
MARK_VAL_T(::UnityEngine::UIElements::TextAutoSize);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PropertyBag_TextAutoSize_MaxSizeProperty*, "UnityEngine.UIElements", "TextAutoSize/PropertyBag/MaxSizeProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PropertyBag_TextAutoSize_MinSizeProperty*, "UnityEngine.UIElements", "TextAutoSize/PropertyBag/MinSizeProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PropertyBag_TextAutoSize_ModeProperty*, "UnityEngine.UIElements", "TextAutoSize/PropertyBag/ModeProperty");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::TextAutoSize_PropertyBag*, "UnityEngine.UIElements", "TextAutoSize/PropertyBag");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::TextAutoSize, "UnityEngine.UIElements", "TextAutoSize");
// Dependencies UnityEngine.UIElements.Length, UnityEngine.UIElements.TextAutoSizeMode
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.TextAutoSize
struct CORDL_TYPE TextAutoSize {
public:
  // Declarations
  using PropertyBag = ::UnityEngine::UIElements::TextAutoSize_PropertyBag;

  __declspec(property(get = get_maxSize, put = set_maxSize)) ::UnityEngine::UIElements::Length maxSize;

  __declspec(property(get = get_minSize, put = set_minSize)) ::UnityEngine::UIElements::Length minSize;

  __declspec(property(get = get_mode, put = set_mode)) ::UnityEngine::UIElements::TextAutoSizeMode mode;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::TextAutoSize>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::TextAutoSize>*();

  /// @brief Method Equals, addr 0x7134ff0, size 0xcc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x7134f84, size 0x6c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::TextAutoSize other);

  /// @brief Method GetHashCode, addr 0x71350bc, size 0x68, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method None, addr 0x7134f70, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::TextAutoSize None();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_maxSize, addr 0x7134f60, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Length get_maxSize();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_minSize, addr 0x7134f50, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Length get_minSize();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_mode, addr 0x7134f40, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TextAutoSizeMode get_mode();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::TextAutoSize>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::TextAutoSize>* i___System__IEquatable_1___UnityEngine__UIElements__TextAutoSize_();

  /// @brief Method op_Equality, addr 0x7135124, size 0x6c, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::TextAutoSize left, ::UnityEngine::UIElements::TextAutoSize right);

  /// @brief Method op_Inequality, addr 0x7135190, size 0x6c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::TextAutoSize left, ::UnityEngine::UIElements::TextAutoSize right);

  /// [CompilerGenerated]
  /// @brief Method set_maxSize, addr 0x7134f68, size 0x8, virtual false, abstract: false, final false
  inline void set_maxSize(::UnityEngine::UIElements::Length value);

  /// [CompilerGenerated]
  /// @brief Method set_minSize, addr 0x7134f58, size 0x8, virtual false, abstract: false, final false
  inline void set_minSize(::UnityEngine::UIElements::Length value);

  /// [CompilerGenerated]
  /// @brief Method set_mode, addr 0x7134f48, size 0x8, virtual false, abstract: false, final false
  inline void set_mode(::UnityEngine::UIElements::TextAutoSizeMode value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextAutoSize();

  // Ctor Parameters [CppParam { name: "_mode_k__BackingField", ty: "::UnityEngine::UIElements::TextAutoSizeMode", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_minSize_k__BackingField", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: None, comment: None }, CppParam { name: "_maxSize_k__BackingField", ty:
  // "::UnityEngine::UIElements::Length", modifiers: "", def_value: None, comment: None }]
  constexpr TextAutoSize(::UnityEngine::UIElements::TextAutoSizeMode _mode_k__BackingField, ::UnityEngine::UIElements::Length _minSize_k__BackingField,
                         ::UnityEngine::UIElements::Length _maxSize_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5197 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <mode>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::TextAutoSizeMode _mode_k__BackingField;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <minSize>k__BackingField, offset: 0x4, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length _minSize_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <maxSize>k__BackingField, offset: 0xc, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length _maxSize_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TextAutoSize, _mode_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextAutoSize, _minSize_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextAutoSize, _maxSize_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::TextAutoSize) == 0x14, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.TextAutoSize, UnityEngine.UIElements.TextAutoSizeMode
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TextAutoSize/PropertyBag/ModeProperty
class CORDL_TYPE PropertyBag_TextAutoSize_ModeProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::TextAutoSize, ::UnityEngine::UIElements::TextAutoSizeMode> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x7135488, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::TextAutoSizeMode GetValue(::by_ref<::UnityEngine::UIElements::TextAutoSize> container);

  static inline ::UnityEngine::UIElements::PropertyBag_TextAutoSize_ModeProperty* New_ctor();

  /// @brief Method SetValue, addr 0x7135490, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::TextAutoSize> container, ::UnityEngine::UIElements::TextAutoSizeMode value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x713534c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method get_IsReadOnly, addr 0x7135480, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// [CompilerGenerated]
  /// @brief Method get_Name, addr 0x7135478, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_TextAutoSize_ModeProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_TextAutoSize_ModeProperty", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_TextAutoSize_ModeProperty(PropertyBag_TextAutoSize_ModeProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_TextAutoSize_ModeProperty", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_TextAutoSize_ModeProperty(PropertyBag_TextAutoSize_ModeProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5193 };

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_TextAutoSize_ModeProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_TextAutoSize_ModeProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::PropertyBag_TextAutoSize_ModeProperty) == 0x28, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.Length, UnityEngine.UIElements.TextAutoSize
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TextAutoSize/PropertyBag/MinSizeProperty
class CORDL_TYPE PropertyBag_TextAutoSize_MinSizeProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::TextAutoSize, ::UnityEngine::UIElements::Length> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x71354a8, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::Length GetValue(::by_ref<::UnityEngine::UIElements::TextAutoSize> container);

  static inline ::UnityEngine::UIElements::PropertyBag_TextAutoSize_MinSizeProperty* New_ctor();

  /// @brief Method SetValue, addr 0x71354b0, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::TextAutoSize> container, ::UnityEngine::UIElements::Length value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x71353b0, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method get_IsReadOnly, addr 0x71354a0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// [CompilerGenerated]
  /// @brief Method get_Name, addr 0x7135498, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_TextAutoSize_MinSizeProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_TextAutoSize_MinSizeProperty", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_TextAutoSize_MinSizeProperty(PropertyBag_TextAutoSize_MinSizeProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_TextAutoSize_MinSizeProperty", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_TextAutoSize_MinSizeProperty(PropertyBag_TextAutoSize_MinSizeProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5194 };

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_TextAutoSize_MinSizeProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_TextAutoSize_MinSizeProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::PropertyBag_TextAutoSize_MinSizeProperty) == 0x28, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.Property`2<TContainer, TValue>, UnityEngine.UIElements.Length, UnityEngine.UIElements.TextAutoSize
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TextAutoSize/PropertyBag/MaxSizeProperty
class CORDL_TYPE PropertyBag_TextAutoSize_MaxSizeProperty : public ::Unity::Properties::Property_2<::UnityEngine::UIElements::TextAutoSize, ::UnityEngine::UIElements::Length> {
public:
  // Declarations
  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field <IsReadOnly>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__IsReadOnly_k__BackingField, put = __cordl_internal_set__IsReadOnly_k__BackingField)) bool _IsReadOnly_k__BackingField;

  /// @brief Field <Name>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Name_k__BackingField, put = __cordl_internal_set__Name_k__BackingField)) ::StringW _Name_k__BackingField;

  /// @brief Method GetValue, addr 0x71354c8, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::Length GetValue(::by_ref<::UnityEngine::UIElements::TextAutoSize> container);

  static inline ::UnityEngine::UIElements::PropertyBag_TextAutoSize_MaxSizeProperty* New_ctor();

  /// @brief Method SetValue, addr 0x71354d0, size 0x8, virtual true, abstract: false, final false
  inline void SetValue(::by_ref<::UnityEngine::UIElements::TextAutoSize> container, ::UnityEngine::UIElements::Length value);

  constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Name_k__BackingField();

  constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Name_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x7135414, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method get_IsReadOnly, addr 0x71354c0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// [CompilerGenerated]
  /// @brief Method get_Name, addr 0x71354b8, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropertyBag_TextAutoSize_MaxSizeProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_TextAutoSize_MaxSizeProperty", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropertyBag_TextAutoSize_MaxSizeProperty(PropertyBag_TextAutoSize_MaxSizeProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropertyBag_TextAutoSize_MaxSizeProperty", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropertyBag_TextAutoSize_MaxSizeProperty(PropertyBag_TextAutoSize_MaxSizeProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5195 };

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <IsReadOnly>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____IsReadOnly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_TextAutoSize_MaxSizeProperty, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropertyBag_TextAutoSize_MaxSizeProperty, ____IsReadOnly_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::PropertyBag_TextAutoSize_MaxSizeProperty) == 0x28, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.ContainerPropertyBag`1<TContainer>, UnityEngine.UIElements.TextAutoSize
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TextAutoSize/PropertyBag
class CORDL_TYPE TextAutoSize_PropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::UIElements::TextAutoSize> {
public:
  // Declarations
  using MaxSizeProperty = ::UnityEngine::UIElements::PropertyBag_TextAutoSize_MaxSizeProperty;

  using MinSizeProperty = ::UnityEngine::UIElements::PropertyBag_TextAutoSize_MinSizeProperty;

  using ModeProperty = ::UnityEngine::UIElements::PropertyBag_TextAutoSize_ModeProperty;

  static inline ::UnityEngine::UIElements::TextAutoSize_PropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x71351fc, size 0x150, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextAutoSize_PropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextAutoSize_PropertyBag", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextAutoSize_PropertyBag(TextAutoSize_PropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextAutoSize_PropertyBag", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextAutoSize_PropertyBag(TextAutoSize_PropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5196 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::TextAutoSize_PropertyBag) == 0x28, "Size mismatch!");

} // namespace UnityEngine::UIElements
