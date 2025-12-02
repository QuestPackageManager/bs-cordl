#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BindingUpdater.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Properties/zzzz__ConcreteTypeVisitor_def.hpp"
#include "Unity/Properties/zzzz__PathVisitor_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingResult_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingUpdateStage_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BindingUpdater)
namespace System {
class Object;
}
namespace System {
template <typename T1, typename T2, typename T3> struct ValueTuple_3;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4> struct ValueTuple_4;
}
namespace Unity::Properties {
struct PropertyPath;
}
namespace Unity::Properties {
template <typename TContainer, typename TValue> class Property_2;
}
namespace Unity::Properties {
struct VisitReturnCode;
}
namespace UnityEngine::UIElements {
struct BindingContext;
}
namespace UnityEngine::UIElements {
struct BindingResult;
}
namespace UnityEngine::UIElements {
struct BindingUpdateStage;
}
namespace UnityEngine::UIElements {
class BindingUpdater_CastDataSourceVisitor;
}
namespace UnityEngine::UIElements {
class BindingUpdater_UIPathVisitor;
}
namespace UnityEngine::UIElements {
class Binding;
}
namespace UnityEngine::UIElements {
class CustomBinding;
}
namespace UnityEngine::UIElements {
class DataBinding;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BindingUpdater;
}
namespace UnityEngine::UIElements {
class BindingUpdater_CastDataSourceVisitor;
}
namespace UnityEngine::UIElements {
class BindingUpdater_UIPathVisitor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::BindingUpdater);
MARK_REF_PTR_T(::UnityEngine::UIElements::BindingUpdater_CastDataSourceVisitor);
MARK_REF_PTR_T(::UnityEngine::UIElements::BindingUpdater_UIPathVisitor);
// Dependencies Unity.Properties.ConcreteTypeVisitor, UnityEngine.UIElements.BindingContext, UnityEngine.UIElements.BindingResult
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BindingUpdater/CastDataSourceVisitor
class CORDL_TYPE BindingUpdater_CastDataSourceVisitor : public ::Unity::Properties::ConcreteTypeVisitor {
public:
  // Declarations
  __declspec(property(get = get_Binding, put = set_Binding)) ::UnityEngine::UIElements::DataBinding* Binding;

  /// @brief Field <Binding>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Binding_k__BackingField, put = __cordl_internal_set__Binding_k__BackingField)) ::UnityEngine::UIElements::DataBinding* _Binding_k__BackingField;

  /// @brief Field <bindingContext>k__BackingField, offset 0x18, size 0x138
  __declspec(property(get = __cordl_internal_get__bindingContext_k__BackingField,
                      put = __cordl_internal_set__bindingContext_k__BackingField)) ::UnityEngine::UIElements::BindingContext _bindingContext_k__BackingField;

  /// @brief Field <result>k__BackingField, offset 0x150, size 0x10
  __declspec(property(get = __cordl_internal_get__result_k__BackingField, put = __cordl_internal_set__result_k__BackingField)) ::UnityEngine::UIElements::BindingResult _result_k__BackingField;

  __declspec(property(get = get_bindingContext, put = set_bindingContext)) ::UnityEngine::UIElements::BindingContext bindingContext;

  __declspec(property(get = get_result, put = set_result)) ::UnityEngine::UIElements::BindingResult result;

  static inline ::UnityEngine::UIElements::BindingUpdater_CastDataSourceVisitor* New_ctor();

  /// @brief Method Reset, addr 0x69fde70, size 0x10, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method VisitContainer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename TContainer> inline void VisitContainer(::ByRef<TContainer> container);

  constexpr ::UnityEngine::UIElements::DataBinding* const& __cordl_internal_get__Binding_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::DataBinding*& __cordl_internal_get__Binding_k__BackingField();

  constexpr ::UnityEngine::UIElements::BindingContext const& __cordl_internal_get__bindingContext_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::BindingContext& __cordl_internal_get__bindingContext_k__BackingField();

  constexpr ::UnityEngine::UIElements::BindingResult const& __cordl_internal_get__result_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::BindingResult& __cordl_internal_get__result_k__BackingField();

  constexpr void __cordl_internal_set__Binding_k__BackingField(::UnityEngine::UIElements::DataBinding* value);

  constexpr void __cordl_internal_set__bindingContext_k__BackingField(::UnityEngine::UIElements::BindingContext value);

  constexpr void __cordl_internal_set__result_k__BackingField(::UnityEngine::UIElements::BindingResult value);

  /// @brief Method .ctor, addr 0x69fdf1c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Binding, addr 0x69fdf24, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DataBinding* get_Binding();

  /// @brief Method get_bindingContext, addr 0x69fdf34, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BindingContext get_bindingContext();

  /// @brief Method get_result, addr 0x69fdf50, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BindingResult get_result();

  /// @brief Method set_Binding, addr 0x69fdf2c, size 0x8, virtual false, abstract: false, final false
  inline void set_Binding(::UnityEngine::UIElements::DataBinding* value);

  /// @brief Method set_bindingContext, addr 0x69fdf44, size 0xc, virtual false, abstract: false, final false
  inline void set_bindingContext(::UnityEngine::UIElements::BindingContext value);

  /// @brief Method set_result, addr 0x69fdf5c, size 0x8, virtual false, abstract: false, final false
  inline void set_result(::UnityEngine::UIElements::BindingResult value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindingUpdater_CastDataSourceVisitor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BindingUpdater_CastDataSourceVisitor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindingUpdater_CastDataSourceVisitor(BindingUpdater_CastDataSourceVisitor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindingUpdater_CastDataSourceVisitor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindingUpdater_CastDataSourceVisitor(BindingUpdater_CastDataSourceVisitor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4027 };

  /// @brief Field <Binding>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::DataBinding* ____Binding_k__BackingField;

  /// @brief Field <bindingContext>k__BackingField, offset: 0x18, size: 0x138, def value: None
  ::UnityEngine::UIElements::BindingContext ____bindingContext_k__BackingField;

  /// @brief Field <result>k__BackingField, offset: 0x150, size: 0x10, def value: None
  ::UnityEngine::UIElements::BindingResult ____result_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BindingUpdater_CastDataSourceVisitor, ____Binding_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BindingUpdater_CastDataSourceVisitor, ____bindingContext_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BindingUpdater_CastDataSourceVisitor, ____result_k__BackingField) == 0x150, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BindingUpdater_CastDataSourceVisitor, 0x160>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies Unity.Properties.PathVisitor, UnityEngine.UIElements.BindingContext, UnityEngine.UIElements.BindingResult, UnityEngine.UIElements.BindingUpdateStage
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BindingUpdater/UIPathVisitor
class CORDL_TYPE BindingUpdater_UIPathVisitor : public ::Unity::Properties::PathVisitor {
public:
  // Declarations
  /// @brief Field <bindingContext>k__BackingField, offset 0xc8, size 0x138
  __declspec(property(get = __cordl_internal_get__bindingContext_k__BackingField,
                      put = __cordl_internal_set__bindingContext_k__BackingField)) ::UnityEngine::UIElements::BindingContext _bindingContext_k__BackingField;

  /// @brief Field <binding>k__BackingField, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__binding_k__BackingField, put = __cordl_internal_set__binding_k__BackingField)) ::UnityEngine::UIElements::DataBinding* _binding_k__BackingField;

  /// @brief Field <direction>k__BackingField, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get__direction_k__BackingField,
                      put = __cordl_internal_set__direction_k__BackingField)) ::UnityEngine::UIElements::BindingUpdateStage _direction_k__BackingField;

  /// @brief Field <result>k__BackingField, offset 0x200, size 0x10
  __declspec(property(get = __cordl_internal_get__result_k__BackingField, put = __cordl_internal_set__result_k__BackingField)) ::UnityEngine::UIElements::BindingResult _result_k__BackingField;

  __declspec(property(get = get_binding, put = set_binding)) ::UnityEngine::UIElements::DataBinding* binding;

  __declspec(property(get = get_bindingContext, put = set_bindingContext)) ::UnityEngine::UIElements::BindingContext bindingContext;

  __declspec(property(get = get_direction, put = set_direction)) ::UnityEngine::UIElements::BindingUpdateStage direction;

  __declspec(property(get = get_result, put = set_result)) ::UnityEngine::UIElements::BindingResult result;

  static inline ::UnityEngine::UIElements::BindingUpdater_UIPathVisitor* New_ctor();

  /// @brief Method Reset, addr 0x69fdfbc, size 0x44, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method VisitPath, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename TContainer, typename TValue> inline void VisitPath(::Unity::Properties::Property_2<TContainer, TValue>* property, ::ByRef<TContainer> container, ::ByRef<TValue> value);

  constexpr ::UnityEngine::UIElements::BindingContext const& __cordl_internal_get__bindingContext_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::BindingContext& __cordl_internal_get__bindingContext_k__BackingField();

  constexpr ::UnityEngine::UIElements::DataBinding* const& __cordl_internal_get__binding_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::DataBinding*& __cordl_internal_get__binding_k__BackingField();

  constexpr ::UnityEngine::UIElements::BindingUpdateStage const& __cordl_internal_get__direction_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::BindingUpdateStage& __cordl_internal_get__direction_k__BackingField();

  constexpr ::UnityEngine::UIElements::BindingResult const& __cordl_internal_get__result_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::BindingResult& __cordl_internal_get__result_k__BackingField();

  constexpr void __cordl_internal_set__bindingContext_k__BackingField(::UnityEngine::UIElements::BindingContext value);

  constexpr void __cordl_internal_set__binding_k__BackingField(::UnityEngine::UIElements::DataBinding* value);

  constexpr void __cordl_internal_set__direction_k__BackingField(::UnityEngine::UIElements::BindingUpdateStage value);

  constexpr void __cordl_internal_set__result_k__BackingField(::UnityEngine::UIElements::BindingResult value);

  /// @brief Method .ctor, addr 0x69fdf20, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_binding, addr 0x69fdf64, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DataBinding* get_binding();

  /// @brief Method get_bindingContext, addr 0x69fdf84, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BindingContext get_bindingContext();

  /// @brief Method get_direction, addr 0x69fdf74, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BindingUpdateStage get_direction();

  /// @brief Method get_result, addr 0x69fdfa0, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BindingResult get_result();

  /// @brief Method set_binding, addr 0x69fdf6c, size 0x8, virtual false, abstract: false, final false
  inline void set_binding(::UnityEngine::UIElements::DataBinding* value);

  /// @brief Method set_bindingContext, addr 0x69fdf94, size 0xc, virtual false, abstract: false, final false
  inline void set_bindingContext(::UnityEngine::UIElements::BindingContext value);

  /// @brief Method set_direction, addr 0x69fdf7c, size 0x8, virtual false, abstract: false, final false
  inline void set_direction(::UnityEngine::UIElements::BindingUpdateStage value);

  /// @brief Method set_result, addr 0x69fdfb0, size 0xc, virtual false, abstract: false, final false
  inline void set_result(::UnityEngine::UIElements::BindingResult value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindingUpdater_UIPathVisitor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BindingUpdater_UIPathVisitor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindingUpdater_UIPathVisitor(BindingUpdater_UIPathVisitor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindingUpdater_UIPathVisitor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindingUpdater_UIPathVisitor(BindingUpdater_UIPathVisitor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4028 };

  /// @brief Field <binding>k__BackingField, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::UIElements::DataBinding* ____binding_k__BackingField;

  /// @brief Field <direction>k__BackingField, offset: 0xc0, size: 0x4, def value: None
  ::UnityEngine::UIElements::BindingUpdateStage ____direction_k__BackingField;

  /// @brief Field <bindingContext>k__BackingField, offset: 0xc8, size: 0x138, def value: None
  ::UnityEngine::UIElements::BindingContext ____bindingContext_k__BackingField;

  /// @brief Field <result>k__BackingField, offset: 0x200, size: 0x10, def value: None
  ::UnityEngine::UIElements::BindingResult ____result_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::BindingUpdater_UIPathVisitor, ____binding_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BindingUpdater_UIPathVisitor, ____direction_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BindingUpdater_UIPathVisitor, ____bindingContext_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BindingUpdater_UIPathVisitor, ____result_k__BackingField) == 0x200, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BindingUpdater_UIPathVisitor, 0x210>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BindingUpdater
class CORDL_TYPE BindingUpdater : public ::System::Object {
public:
  // Declarations
  using CastDataSourceVisitor = ::UnityEngine::UIElements::BindingUpdater_CastDataSourceVisitor;

  using UIPathVisitor = ::UnityEngine::UIElements::BindingUpdater_UIPathVisitor;

  /// @brief Field s_VisitDataSourceAsRootVisitor, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_VisitDataSourceAsRootVisitor,
                      put = setStaticF_s_VisitDataSourceAsRootVisitor)) ::UnityEngine::UIElements::BindingUpdater_CastDataSourceVisitor* s_VisitDataSourceAsRootVisitor;

  /// @brief Field s_VisitDataSourceAtPathVisitor, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_VisitDataSourceAtPathVisitor,
                      put = setStaticF_s_VisitDataSourceAtPathVisitor)) ::UnityEngine::UIElements::BindingUpdater_UIPathVisitor* s_VisitDataSourceAtPathVisitor;

  /// @brief Method GetExtractValueErrorString, addr 0x69fdb58, size 0x224, virtual false, abstract: false, final false
  static inline ::StringW GetExtractValueErrorString(::Unity::Properties::VisitReturnCode returnCode, ::System::Object* target, ::ByRef<::Unity::Properties::PropertyPath> path);

  /// @brief Method GetRootDataSourceError, addr 0x69fdd7c, size 0x94, virtual false, abstract: false, final false
  static inline ::StringW GetRootDataSourceError(::System::Object* target);

  /// @brief Method GetVisitationErrorString, addr 0x69fd938, size 0x220, virtual false, abstract: false, final false
  static inline ::StringW GetVisitationErrorString(::Unity::Properties::VisitReturnCode returnCode, ::ByRef<::UnityEngine::UIElements::BindingContext> context);

  static inline ::UnityEngine::UIElements::BindingUpdater* New_ctor();

  /// @brief Method ShouldProcessBindingAtStage, addr 0x69fc440, size 0x1cc, virtual false, abstract: false, final false
  inline bool ShouldProcessBindingAtStage(::UnityEngine::UIElements::Binding* bindingObject, ::UnityEngine::UIElements::BindingUpdateStage stage, bool versionChanged, bool dirty);

  /// @brief Method ShouldProcessBindingAtStage, addr 0x69fc6f4, size 0xc8, virtual false, abstract: false, final false
  inline bool ShouldProcessBindingAtStage(::UnityEngine::UIElements::CustomBinding* customBinding, ::UnityEngine::UIElements::BindingUpdateStage stage, bool versionChanged, bool dirty);

  /// @brief Method ShouldProcessBindingAtStage, addr 0x69fc60c, size 0xe8, virtual false, abstract: false, final false
  static inline bool ShouldProcessBindingAtStage(::UnityEngine::UIElements::DataBinding* dataBinding, ::UnityEngine::UIElements::BindingUpdateStage stage, bool versionChanged, bool dirty);

  /// @brief Method TryUpdateUIWithNonContainer, addr 0x69fcfe0, size 0x824, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::BindingResult TryUpdateUIWithNonContainer(::ByRef<::UnityEngine::UIElements::BindingContext> context, ::UnityEngine::UIElements::DataBinding* binding,
                                                                                     ::System::Object* value);

  /// @brief Method UpdateDataSource, addr 0x69fcfd4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BindingResult UpdateDataSource(::ByRef<::UnityEngine::UIElements::BindingContext> context, ::UnityEngine::UIElements::CustomBinding* customBinding);

  /// @brief Method UpdateDataSource, addr 0x69fcd64, size 0x270, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BindingResult UpdateDataSource(::ByRef<::UnityEngine::UIElements::BindingContext> context, ::UnityEngine::UIElements::DataBinding* dataBinding);

  /// @brief Method UpdateSource, addr 0x69fcbe4, size 0x180, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BindingResult UpdateSource(::ByRef<::UnityEngine::UIElements::BindingContext> context, ::UnityEngine::UIElements::Binding* bindingObject);

  /// @brief Method UpdateUI, addr 0x69fc7bc, size 0x184, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BindingResult UpdateUI(::ByRef<::UnityEngine::UIElements::BindingContext> context, ::UnityEngine::UIElements::Binding* bindingObject);

  /// @brief Method UpdateUI, addr 0x69fcbc4, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BindingResult UpdateUI(::ByRef<::UnityEngine::UIElements::BindingContext> context, ::UnityEngine::UIElements::CustomBinding* customBinding);

  /// @brief Method UpdateUI, addr 0x69fc940, size 0x284, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BindingResult UpdateUI(::ByRef<::UnityEngine::UIElements::BindingContext> context, ::UnityEngine::UIElements::DataBinding* dataBinding);

  /// @brief Method VisitAtPath, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContainer>
  static inline ::System::ValueTuple_4<bool, ::Unity::Properties::VisitReturnCode, ::Unity::Properties::VisitReturnCode, ::UnityEngine::UIElements::BindingResult>
  VisitAtPath(::UnityEngine::UIElements::DataBinding* dataBinding, ::UnityEngine::UIElements::BindingUpdateStage direction, ::ByRef<TContainer> container,
              ::ByRef<::Unity::Properties::PropertyPath> path, ::ByRef<::UnityEngine::UIElements::BindingContext> context);

  /// @brief Method VisitRoot, addr 0x69fd804, size 0x134, virtual false, abstract: false, final false
  static inline ::System::ValueTuple_3<bool, ::Unity::Properties::VisitReturnCode, ::UnityEngine::UIElements::BindingResult>
  VisitRoot(::UnityEngine::UIElements::DataBinding* dataBinding, ::ByRef<::System::Object*> container, ::ByRef<::UnityEngine::UIElements::BindingContext> context);

  /// @brief Method .ctor, addr 0x69fde80, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::BindingUpdater_CastDataSourceVisitor* getStaticF_s_VisitDataSourceAsRootVisitor();

  static inline ::UnityEngine::UIElements::BindingUpdater_UIPathVisitor* getStaticF_s_VisitDataSourceAtPathVisitor();

  static inline void setStaticF_s_VisitDataSourceAsRootVisitor(::UnityEngine::UIElements::BindingUpdater_CastDataSourceVisitor* value);

  static inline void setStaticF_s_VisitDataSourceAtPathVisitor(::UnityEngine::UIElements::BindingUpdater_UIPathVisitor* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindingUpdater();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BindingUpdater", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindingUpdater(BindingUpdater&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindingUpdater", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindingUpdater(BindingUpdater const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4029 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BindingUpdater, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::BindingUpdater);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BindingUpdater*, "UnityEngine.UIElements", "BindingUpdater");
NEED_NO_BOX(::UnityEngine::UIElements::BindingUpdater_CastDataSourceVisitor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BindingUpdater_CastDataSourceVisitor*, "UnityEngine.UIElements", "BindingUpdater/CastDataSourceVisitor");
NEED_NO_BOX(::UnityEngine::UIElements::BindingUpdater_UIPathVisitor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BindingUpdater_UIPathVisitor*, "UnityEngine.UIElements", "BindingUpdater/UIPathVisitor");
