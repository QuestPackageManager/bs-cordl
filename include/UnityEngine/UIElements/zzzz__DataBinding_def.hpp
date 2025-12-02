#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DataBinding.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__PropertyPath_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__Binding_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DataBinding)
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Unity::Properties {
struct PropertyPath;
}
namespace Unity::Properties {
struct VisitReturnCode;
}
namespace UnityEngine::UIElements {
struct BindingContext;
}
namespace UnityEngine::UIElements {
struct BindingId;
}
namespace UnityEngine::UIElements {
struct BindingMode;
}
namespace UnityEngine::UIElements {
struct BindingResult;
}
namespace UnityEngine::UIElements {
class ConverterGroup;
}
namespace UnityEngine::UIElements {
class IDataSourceProvider;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DataBinding;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DataBinding);
// Dependencies Unity.Properties.PropertyPath, UnityEngine.UIElements.Binding, UnityEngine.UIElements.BindingMode
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DataBinding
class CORDL_TYPE DataBinding : public ::UnityEngine::UIElements::Binding {
public:
  // Declarations
  /// @brief Field <dataSourcePath>k__BackingField, offset 0x48, size 0x90
  __declspec(property(get = __cordl_internal_get__dataSourcePath_k__BackingField,
                      put = __cordl_internal_set__dataSourcePath_k__BackingField)) ::Unity::Properties::PropertyPath _dataSourcePath_k__BackingField;

  /// @brief Field <dataSourceType>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__dataSourceType_k__BackingField, put = __cordl_internal_set__dataSourceType_k__BackingField)) ::System::Type* _dataSourceType_k__BackingField;

  /// @brief Field <dataSource>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__dataSource_k__BackingField, put = __cordl_internal_set__dataSource_k__BackingField)) ::System::Object* _dataSource_k__BackingField;

  __declspec(property(get = get_bindingMode, put = set_bindingMode)) ::UnityEngine::UIElements::BindingMode bindingMode;

  __declspec(property(get = get_dataSource, put = set_dataSource)) ::System::Object* dataSource;

  __declspec(property(get = get_dataSourcePath, put = set_dataSourcePath)) ::Unity::Properties::PropertyPath dataSourcePath;

  __declspec(property(get = get_dataSourceType, put = set_dataSourceType)) ::System::Type* dataSourceType;

  /// @brief Field m_BindingMode, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BindingMode, put = __cordl_internal_set_m_BindingMode)) ::UnityEngine::UIElements::BindingMode m_BindingMode;

  /// @brief Field m_SourceToUiConverters, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SourceToUiConverters, put = __cordl_internal_set_m_SourceToUiConverters)) ::UnityEngine::UIElements::ConverterGroup* m_SourceToUiConverters;

  /// @brief Field m_UiToSourceConverters, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UiToSourceConverters, put = __cordl_internal_set_m_UiToSourceConverters)) ::UnityEngine::UIElements::ConverterGroup* m_UiToSourceConverters;

  /// @brief Field s_UpdateUIMethodInfo, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_UpdateUIMethodInfo, put = setStaticF_s_UpdateUIMethodInfo)) ::System::Reflection::MethodInfo* s_UpdateUIMethodInfo;

  __declspec(property(get = get_sourceToUiConverters)) ::UnityEngine::UIElements::ConverterGroup* sourceToUiConverters;

  __declspec(property(get = get_uiToSourceConverters)) ::UnityEngine::UIElements::ConverterGroup* uiToSourceConverters;

  /// @brief Convert operator to "::UnityEngine::UIElements::IDataSourceProvider"
  constexpr operator ::UnityEngine::UIElements::IDataSourceProvider*() noexcept;

  /// @brief Method ApplyConverterGroupToSource, addr 0x6a0ab94, size 0x8c, virtual false, abstract: false, final false
  inline void ApplyConverterGroupToSource(::UnityEngine::UIElements::ConverterGroup* group);

  /// @brief Method ApplyConverterGroupToUI, addr 0x6a0ac20, size 0x8c, virtual false, abstract: false, final false
  inline void ApplyConverterGroupToUI(::UnityEngine::UIElements::ConverterGroup* group);

  /// @brief Method CacheReflectionInfo, addr 0x6a0a8a4, size 0x190, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* CacheReflectionInfo();

  /// @brief Method GetSetValueErrorString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue>
  static inline ::StringW GetSetValueErrorString(::Unity::Properties::VisitReturnCode returnCode, ::System::Object* source, ::ByRef<::Unity::Properties::PropertyPath> sourcePath,
                                                 ::System::Object* target, ::ByRef<::UnityEngine::UIElements::BindingId> targetPath, TValue extractedValueFromSource);

  /// @brief Method UpdateSource, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename TValue> inline ::UnityEngine::UIElements::BindingResult UpdateSource(::ByRef<::UnityEngine::UIElements::BindingContext> context, ::ByRef<TValue> value);

  /// @brief Method UpdateUI, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename TValue> inline ::UnityEngine::UIElements::BindingResult UpdateUI(::ByRef<::UnityEngine::UIElements::BindingContext> context, ::ByRef<TValue> value);

  constexpr ::Unity::Properties::PropertyPath const& __cordl_internal_get__dataSourcePath_k__BackingField() const;

  constexpr ::Unity::Properties::PropertyPath& __cordl_internal_get__dataSourcePath_k__BackingField();

  constexpr ::System::Type* const& __cordl_internal_get__dataSourceType_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__dataSourceType_k__BackingField();

  constexpr ::System::Object* const& __cordl_internal_get__dataSource_k__BackingField() const;

  constexpr ::System::Object*& __cordl_internal_get__dataSource_k__BackingField();

  constexpr ::UnityEngine::UIElements::BindingMode const& __cordl_internal_get_m_BindingMode() const;

  constexpr ::UnityEngine::UIElements::BindingMode& __cordl_internal_get_m_BindingMode();

  constexpr ::UnityEngine::UIElements::ConverterGroup* const& __cordl_internal_get_m_SourceToUiConverters() const;

  constexpr ::UnityEngine::UIElements::ConverterGroup*& __cordl_internal_get_m_SourceToUiConverters();

  constexpr ::UnityEngine::UIElements::ConverterGroup* const& __cordl_internal_get_m_UiToSourceConverters() const;

  constexpr ::UnityEngine::UIElements::ConverterGroup*& __cordl_internal_get_m_UiToSourceConverters();

  constexpr void __cordl_internal_set__dataSourcePath_k__BackingField(::Unity::Properties::PropertyPath value);

  constexpr void __cordl_internal_set__dataSourceType_k__BackingField(::System::Type* value);

  constexpr void __cordl_internal_set__dataSource_k__BackingField(::System::Object* value);

  constexpr void __cordl_internal_set_m_BindingMode(::UnityEngine::UIElements::BindingMode value);

  constexpr void __cordl_internal_set_m_SourceToUiConverters(::UnityEngine::UIElements::ConverterGroup* value);

  constexpr void __cordl_internal_set_m_UiToSourceConverters(::UnityEngine::UIElements::ConverterGroup* value);

  static inline ::System::Reflection::MethodInfo* getStaticF_s_UpdateUIMethodInfo();

  /// @brief Method get_bindingMode, addr 0x6a0aa70, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BindingMode get_bindingMode();

  /// @brief Method get_dataSource, addr 0x6a0aa34, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* get_dataSource();

  /// @brief Method get_dataSourcePath, addr 0x6a0aa54, size 0x10, virtual true, abstract: false, final true
  inline ::Unity::Properties::PropertyPath get_dataSourcePath();

  /// @brief Method get_dataSourceType, addr 0x6a0aa44, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_dataSourceType();

  /// @brief Method get_sourceToUiConverters, addr 0x6a0aa94, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ConverterGroup* get_sourceToUiConverters();

  /// @brief Method get_uiToSourceConverters, addr 0x6a0ab14, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ConverterGroup* get_uiToSourceConverters();

  /// @brief Method get_updateUIMethod, addr 0x69fde10, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Reflection::MethodInfo* get_updateUIMethod();

  /// @brief Convert to "::UnityEngine::UIElements::IDataSourceProvider"
  constexpr ::UnityEngine::UIElements::IDataSourceProvider* i___UnityEngine__UIElements__IDataSourceProvider() noexcept;

  static inline void setStaticF_s_UpdateUIMethodInfo(::System::Reflection::MethodInfo* value);

  /// @brief Method set_bindingMode, addr 0x6a0aa78, size 0x1c, virtual false, abstract: false, final false
  inline void set_bindingMode(::UnityEngine::UIElements::BindingMode value);

  /// @brief Method set_dataSource, addr 0x6a0aa3c, size 0x8, virtual false, abstract: false, final false
  inline void set_dataSource(::System::Object* value);

  /// @brief Method set_dataSourcePath, addr 0x6a0aa64, size 0xc, virtual false, abstract: false, final false
  inline void set_dataSourcePath(::Unity::Properties::PropertyPath value);

  /// @brief Method set_dataSourceType, addr 0x6a0aa4c, size 0x8, virtual false, abstract: false, final false
  inline void set_dataSourceType(::System::Type* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataBinding();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DataBinding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataBinding(DataBinding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataBinding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataBinding(DataBinding const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4037 };

  /// @brief Field m_BindingMode, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::UIElements::BindingMode ___m_BindingMode;

  /// @brief Field m_SourceToUiConverters, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::ConverterGroup* ___m_SourceToUiConverters;

  /// @brief Field m_UiToSourceConverters, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::ConverterGroup* ___m_UiToSourceConverters;

  /// @brief Field <dataSource>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::System::Object* ____dataSource_k__BackingField;

  /// @brief Field <dataSourceType>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::System::Type* ____dataSourceType_k__BackingField;

  /// @brief Field <dataSourcePath>k__BackingField, offset: 0x48, size: 0x90, def value: None
  ::Unity::Properties::PropertyPath ____dataSourcePath_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::DataBinding, ___m_BindingMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBinding, ___m_SourceToUiConverters) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBinding, ___m_UiToSourceConverters) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBinding, ____dataSource_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBinding, ____dataSourceType_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DataBinding, ____dataSourcePath_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DataBinding, 0xd8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DataBinding);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DataBinding*, "UnityEngine.UIElements", "DataBinding");
