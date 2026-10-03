#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PostProcessingPass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/UIElements/zzzz__ParameterBinding_def.hpp"
#include "UnityEngine/UIElements/zzzz__PostProcessingMargins_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PostProcessingPass)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct FilterFunction;
}
namespace UnityEngine::UIElements {
struct FilterPassContext;
}
namespace UnityEngine::UIElements {
struct ParameterBinding;
}
namespace UnityEngine::UIElements {
struct PostProcessingMargins;
}
namespace UnityEngine::UIElements {
class PostProcessingPass_ApplyFilterPassSettingsDelegate;
}
namespace UnityEngine::UIElements {
class PostProcessingPass_ComputeRequiredMarginsDelegate;
}
namespace UnityEngine::UIElements {
class PostProcessingPass_PrepareMaterialPropertyBlockDelegate;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PostProcessingPass_ApplyFilterPassSettingsDelegate;
}
namespace UnityEngine::UIElements {
class PostProcessingPass_ComputeRequiredMarginsDelegate;
}
namespace UnityEngine::UIElements {
class PostProcessingPass_PrepareMaterialPropertyBlockDelegate;
}
namespace UnityEngine::UIElements {
struct PostProcessingPass;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate*);
MARK_REF_T(::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate*);
MARK_REF_T(::UnityEngine::UIElements::PostProcessingPass_PrepareMaterialPropertyBlockDelegate*);
MARK_VAL_T(::UnityEngine::UIElements::PostProcessingPass);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate*, "UnityEngine.UIElements", "PostProcessingPass/ApplyFilterPassSettingsDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate*, "UnityEngine.UIElements", "PostProcessingPass/ComputeRequiredMarginsDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PostProcessingPass_PrepareMaterialPropertyBlockDelegate*, "UnityEngine.UIElements", "PostProcessingPass/PrepareMaterialPropertyBlockDelegate");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PostProcessingPass, "UnityEngine.UIElements", "PostProcessingPass");
// [Obsolete("This delegate will be removed. Use ApplyFilterPassSettingsDelegate instead.")]
// Dependencies System.MulticastDelegate
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PostProcessingPass/PrepareMaterialPropertyBlockDelegate
class CORDL_TYPE PostProcessingPass_PrepareMaterialPropertyBlockDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x723604c, size 0x58, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::MaterialPropertyBlock* mpb, ::UnityEngine::UIElements::FilterFunction func);

  static inline ::UnityEngine::UIElements::PostProcessingPass_PrepareMaterialPropertyBlockDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x7235fcc, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessingPass_PrepareMaterialPropertyBlockDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessingPass_PrepareMaterialPropertyBlockDelegate", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessingPass_PrepareMaterialPropertyBlockDelegate(PostProcessingPass_PrepareMaterialPropertyBlockDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessingPass_PrepareMaterialPropertyBlockDelegate", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessingPass_PrepareMaterialPropertyBlockDelegate(PostProcessingPass_PrepareMaterialPropertyBlockDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4583 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::PostProcessingPass_PrepareMaterialPropertyBlockDelegate) == 0x80, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.MulticastDelegate
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PostProcessingPass/ApplyFilterPassSettingsDelegate
class CORDL_TYPE PostProcessingPass_ApplyFilterPassSettingsDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x7236124, size 0x58, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::MaterialPropertyBlock* mpb, ::UnityEngine::UIElements::FilterPassContext context);

  static inline ::UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x72360a4, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessingPass_ApplyFilterPassSettingsDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessingPass_ApplyFilterPassSettingsDelegate", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessingPass_ApplyFilterPassSettingsDelegate(PostProcessingPass_ApplyFilterPassSettingsDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessingPass_ApplyFilterPassSettingsDelegate", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessingPass_ApplyFilterPassSettingsDelegate(PostProcessingPass_ApplyFilterPassSettingsDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4584 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate) == 0x80, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.MulticastDelegate
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PostProcessingPass/ComputeRequiredMarginsDelegate
class CORDL_TYPE PostProcessingPass_ComputeRequiredMarginsDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x72361e8, size 0x44, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::PostProcessingMargins Invoke(::UnityEngine::UIElements::FilterFunction func);

  static inline ::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x723617c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessingPass_ComputeRequiredMarginsDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessingPass_ComputeRequiredMarginsDelegate", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessingPass_ComputeRequiredMarginsDelegate(PostProcessingPass_ComputeRequiredMarginsDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessingPass_ComputeRequiredMarginsDelegate", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessingPass_ComputeRequiredMarginsDelegate(PostProcessingPass_ComputeRequiredMarginsDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4585 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate) == 0x80, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ParameterBinding, UnityEngine.UIElements.PostProcessingMargins
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.PostProcessingPass
struct CORDL_TYPE PostProcessingPass {
public:
  // Declarations
  using ApplyFilterPassSettingsDelegate = ::UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate;

  using ComputeRequiredMarginsDelegate = ::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate;

  using PrepareMaterialPropertyBlockDelegate = ::UnityEngine::UIElements::PostProcessingPass_PrepareMaterialPropertyBlockDelegate;

  __declspec(property(get = get_applySettingsCallback, put = set_applySettingsCallback)) ::UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate* applySettingsCallback;

  __declspec(property(get = get_computeRequiredReadMarginsCallback,
                      put = set_computeRequiredReadMarginsCallback)) ::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate* computeRequiredReadMarginsCallback;

  __declspec(property(get = get_computeRequiredWriteMarginsCallback,
                      put = set_computeRequiredWriteMarginsCallback)) ::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate* computeRequiredWriteMarginsCallback;

  /// @brief [CreateProperty]
  __declspec(property(get = get_material, put = set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief [CreateProperty]
  __declspec(property(get = get_parameterBindings, put = set_parameterBindings)) ::ArrayW<::UnityEngine::UIElements::ParameterBinding> parameterBindings;

  /// @brief [CreateProperty]
  __declspec(property(get = get_passIndex, put = set_passIndex)) int32_t passIndex;

  __declspec(property(get = get_readMargins, put = set_readMargins)) ::UnityEngine::UIElements::PostProcessingMargins readMargins;

  /// @brief [CreateProperty]
  __declspec(property(get = get_writeMargins, put = set_writeMargins)) ::UnityEngine::UIElements::PostProcessingMargins writeMargins;

  /// [CompilerGenerated]
  /// [IsReadOnly]
  /// @brief Method get_applySettingsCallback, addr 0x7235f9c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate* get_applySettingsCallback();

  /// [IsReadOnly]
  /// [CompilerGenerated]
  /// @brief Method get_computeRequiredReadMarginsCallback, addr 0x7235fac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate* get_computeRequiredReadMarginsCallback();

  /// [CompilerGenerated]
  /// [IsReadOnly]
  /// @brief Method get_computeRequiredWriteMarginsCallback, addr 0x7235fbc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate* get_computeRequiredWriteMarginsCallback();

  /// @brief Method get_material, addr 0x7235f3c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_material();

  /// @brief Method get_parameterBindings, addr 0x7235f5c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::UIElements::ParameterBinding> get_parameterBindings();

  /// @brief Method get_passIndex, addr 0x7235f4c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_passIndex();

  /// @brief Method get_readMargins, addr 0x7235f6c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PostProcessingMargins get_readMargins();

  /// @brief Method get_writeMargins, addr 0x7235f84, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PostProcessingMargins get_writeMargins();

  /// [CompilerGenerated]
  /// @brief Method set_applySettingsCallback, addr 0x7235fa4, size 0x8, virtual false, abstract: false, final false
  inline void set_applySettingsCallback(::UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate* value);

  /// [CompilerGenerated]
  /// @brief Method set_computeRequiredReadMarginsCallback, addr 0x7235fb4, size 0x8, virtual false, abstract: false, final false
  inline void set_computeRequiredReadMarginsCallback(::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate* value);

  /// [CompilerGenerated]
  /// @brief Method set_computeRequiredWriteMarginsCallback, addr 0x7235fc4, size 0x8, virtual false, abstract: false, final false
  inline void set_computeRequiredWriteMarginsCallback(::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate* value);

  /// @brief Method set_material, addr 0x7235f44, size 0x8, virtual false, abstract: false, final false
  inline void set_material(::UnityEngine::Material* value);

  /// @brief Method set_parameterBindings, addr 0x7235f64, size 0x8, virtual false, abstract: false, final false
  inline void set_parameterBindings(::ArrayW<::UnityEngine::UIElements::ParameterBinding> value);

  /// @brief Method set_passIndex, addr 0x7235f54, size 0x8, virtual false, abstract: false, final false
  inline void set_passIndex(int32_t value);

  /// @brief Method set_readMargins, addr 0x7235f78, size 0xc, virtual false, abstract: false, final false
  inline void set_readMargins(::UnityEngine::UIElements::PostProcessingMargins value);

  /// @brief Method set_writeMargins, addr 0x7235f90, size 0xc, virtual false, abstract: false, final false
  inline void set_writeMargins(::UnityEngine::UIElements::PostProcessingMargins value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessingPass();

  // Ctor Parameters [CppParam { name: "m_Material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_PassIndex", ty: "int32_t", modifiers:
  // "", def_value: None, comment: None }, CppParam { name: "m_ParameterBindings", ty: "::ArrayW<::UnityEngine::UIElements::ParameterBinding>", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "m_ReadMargins", ty: "::UnityEngine::UIElements::PostProcessingMargins", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_WriteMargins", ty:
  // "::UnityEngine::UIElements::PostProcessingMargins", modifiers: "", def_value: None, comment: None }, CppParam { name: "_prepareMaterialPropertyBlockCallback_k__BackingField", ty:
  // "::UnityEngine::UIElements::PostProcessingPass_PrepareMaterialPropertyBlockDelegate*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_applySettingsCallback_k__BackingField",
  // ty: "::UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate*", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_computeRequiredReadMarginsCallback_k__BackingField", ty: "::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate*", modifiers: "", def_value: None, comment: None },
  // CppParam { name: "_computeRequiredWriteMarginsCallback_k__BackingField", ty: "::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate*", modifiers: "", def_value: None,
  // comment: None }]
  constexpr PostProcessingPass(::UnityW<::UnityEngine::Material> m_Material, int32_t m_PassIndex, ::ArrayW<::UnityEngine::UIElements::ParameterBinding> m_ParameterBindings,
                               ::UnityEngine::UIElements::PostProcessingMargins m_ReadMargins, ::UnityEngine::UIElements::PostProcessingMargins m_WriteMargins,
                               ::UnityEngine::UIElements::PostProcessingPass_PrepareMaterialPropertyBlockDelegate* _prepareMaterialPropertyBlockCallback_k__BackingField,
                               ::UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate* _applySettingsCallback_k__BackingField,
                               ::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate* _computeRequiredReadMarginsCallback_k__BackingField,
                               ::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate* _computeRequiredWriteMarginsCallback_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4586 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// [SerializeField]
  /// [DontCreateProperty]
  /// @brief Field m_Material, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> m_Material;

  /// [SerializeField]
  /// [DontCreateProperty]
  /// @brief Field m_PassIndex, offset: 0x8, size: 0x4, def value: None
  int32_t m_PassIndex;

  /// [SerializeField]
  /// [DontCreateProperty]
  /// @brief Field m_ParameterBindings, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::ParameterBinding> m_ParameterBindings;

  /// [SerializeField]
  /// @brief Field m_ReadMargins, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::UIElements::PostProcessingMargins m_ReadMargins;

  /// [SerializeField]
  /// [DontCreateProperty]
  /// @brief Field m_WriteMargins, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::UIElements::PostProcessingMargins m_WriteMargins;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <prepareMaterialPropertyBlockCallback>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UIElements::PostProcessingPass_PrepareMaterialPropertyBlockDelegate* _prepareMaterialPropertyBlockCallback_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <applySettingsCallback>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::PostProcessingPass_ApplyFilterPassSettingsDelegate* _applySettingsCallback_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <computeRequiredReadMarginsCallback>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate* _computeRequiredReadMarginsCallback_k__BackingField;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <computeRequiredWriteMarginsCallback>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::PostProcessingPass_ComputeRequiredMarginsDelegate* _computeRequiredWriteMarginsCallback_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PostProcessingPass, m_Material) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PostProcessingPass, m_PassIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PostProcessingPass, m_ParameterBindings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PostProcessingPass, m_ReadMargins) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PostProcessingPass, m_WriteMargins) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PostProcessingPass, _prepareMaterialPropertyBlockCallback_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PostProcessingPass, _applySettingsCallback_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PostProcessingPass, _computeRequiredReadMarginsCallback_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PostProcessingPass, _computeRequiredWriteMarginsCallback_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::PostProcessingPass) == 0x58, "Size mismatch!");

} // namespace UnityEngine::UIElements
