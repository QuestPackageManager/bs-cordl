#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
CORDL_MODULE_EXPORT(VectorImageManager)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements::UIR {
class GradientRemapPool;
}
namespace UnityEngine::UIElements::UIR {
class GradientRemap;
}
namespace UnityEngine::UIElements::UIR {
class GradientSettingsAtlas;
}
namespace UnityEngine::UIElements::UIR {
class VectorImageRenderInfoPool;
}
namespace UnityEngine::UIElements::UIR {
class VectorImageRenderInfo;
}
namespace UnityEngine::UIElements {
class AtlasBase;
}
namespace UnityEngine::UIElements {
class VectorImage;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class VectorImageManager;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::VectorImageManager);
// Type: UnityEngine.UIElements.UIR::VectorImageManager
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 58, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(8695))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6682))
// CS Name: ::UnityEngine.UIElements.UIR::VectorImageManager*
class CORDL_TYPE VectorImageManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Atlas, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Atlas, put = __cordl_internal_set_m_Atlas))::UnityEngine::UIElements::AtlasBase* m_Atlas;

  /// @brief Field m_Registered, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Registered,
                      put = __cordl_internal_set_m_Registered))::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::UIElements::VectorImage>,
                                                                                                            ::UnityEngine::UIElements::UIR::VectorImageRenderInfo*>* m_Registered;

  /// @brief Field m_RenderInfoPool, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderInfoPool, put = __cordl_internal_set_m_RenderInfoPool))::UnityEngine::UIElements::UIR::VectorImageRenderInfoPool* m_RenderInfoPool;

  /// @brief Field m_GradientRemapPool, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GradientRemapPool, put = __cordl_internal_set_m_GradientRemapPool))::UnityEngine::UIElements::UIR::GradientRemapPool* m_GradientRemapPool;

  /// @brief Field m_GradientSettingsAtlas, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GradientSettingsAtlas,
                      put = __cordl_internal_set_m_GradientSettingsAtlas))::UnityEngine::UIElements::UIR::GradientSettingsAtlas* m_GradientSettingsAtlas;

  /// @brief Field m_LoggedExhaustedSettingsAtlas, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_m_LoggedExhaustedSettingsAtlas, put = __cordl_internal_set_m_LoggedExhaustedSettingsAtlas)) bool m_LoggedExhaustedSettingsAtlas;

  /// @brief Field <disposed>k__BackingField, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed_k__BackingField, put = __cordl_internal_set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  /// @brief Field instances, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_instances, put = setStaticF_instances))::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::VectorImageManager*>* instances;

  /// @brief Field s_MarkerRegister, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_MarkerRegister, put = setStaticF_s_MarkerRegister))::Unity::Profiling::ProfilerMarker s_MarkerRegister;

  /// @brief Field s_MarkerUnregister, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_MarkerUnregister, put = setStaticF_s_MarkerUnregister))::Unity::Profiling::ProfilerMarker s_MarkerUnregister;

  __declspec(property(get = get_atlas))::UnityW<::UnityEngine::Texture2D> atlas;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  constexpr ::UnityEngine::UIElements::AtlasBase*& __cordl_internal_get_m_Atlas();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::AtlasBase*> const& __cordl_internal_get_m_Atlas() const;

  constexpr void __cordl_internal_set_m_Atlas(::UnityEngine::UIElements::AtlasBase* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::UIElements::VectorImage>, ::UnityEngine::UIElements::UIR::VectorImageRenderInfo*>*&
  __cordl_internal_get_m_Registered();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::UIElements::VectorImage>, ::UnityEngine::UIElements::UIR::VectorImageRenderInfo*>*> const&
  __cordl_internal_get_m_Registered() const;

  constexpr void
  __cordl_internal_set_m_Registered(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::UIElements::VectorImage>, ::UnityEngine::UIElements::UIR::VectorImageRenderInfo*>* value);

  constexpr ::UnityEngine::UIElements::UIR::VectorImageRenderInfoPool*& __cordl_internal_get_m_RenderInfoPool();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::VectorImageRenderInfoPool*> const& __cordl_internal_get_m_RenderInfoPool() const;

  constexpr void __cordl_internal_set_m_RenderInfoPool(::UnityEngine::UIElements::UIR::VectorImageRenderInfoPool* value);

  constexpr ::UnityEngine::UIElements::UIR::GradientRemapPool*& __cordl_internal_get_m_GradientRemapPool();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::GradientRemapPool*> const& __cordl_internal_get_m_GradientRemapPool() const;

  constexpr void __cordl_internal_set_m_GradientRemapPool(::UnityEngine::UIElements::UIR::GradientRemapPool* value);

  constexpr ::UnityEngine::UIElements::UIR::GradientSettingsAtlas*& __cordl_internal_get_m_GradientSettingsAtlas();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::GradientSettingsAtlas*> const& __cordl_internal_get_m_GradientSettingsAtlas() const;

  constexpr void __cordl_internal_set_m_GradientSettingsAtlas(::UnityEngine::UIElements::UIR::GradientSettingsAtlas* value);

  constexpr bool& __cordl_internal_get_m_LoggedExhaustedSettingsAtlas();

  constexpr bool const& __cordl_internal_get_m_LoggedExhaustedSettingsAtlas() const;

  constexpr void __cordl_internal_set_m_LoggedExhaustedSettingsAtlas(bool value);

  constexpr bool& __cordl_internal_get__disposed_k__BackingField();

  constexpr bool const& __cordl_internal_get__disposed_k__BackingField() const;

  constexpr void __cordl_internal_set__disposed_k__BackingField(bool value);

  static inline void setStaticF_instances(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::VectorImageManager*>* value);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::VectorImageManager*>* getStaticF_instances();

  static inline void setStaticF_s_MarkerRegister(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerRegister();

  static inline void setStaticF_s_MarkerUnregister(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerUnregister();

  /// @brief Method get_atlas, addr 0x2deb5b0, size 0x14, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> get_atlas();

  static inline ::UnityEngine::UIElements::UIR::VectorImageManager* New_ctor(::UnityEngine::UIElements::AtlasBase* atlas);

  /// @brief Method .ctor, addr 0x2deb5c4, size 0x1bc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::AtlasBase* atlas);

  /// @brief Method get_disposed, addr 0x2deb780, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// @brief Method set_disposed, addr 0x2deb788, size 0xc, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

  /// @brief Method Dispose, addr 0x2deb794, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2deb800, size 0x118, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Commit, addr 0x2deb918, size 0x30, virtual false, abstract: false, final false
  inline void Commit();

  /// @brief Method AddUser, addr 0x2deb948, size 0x104, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::GradientRemap* AddUser(::UnityEngine::UIElements::VectorImage* vi, ::UnityEngine::UIElements::VisualElement* context);

  /// @brief Method Register, addr 0x2deba4c, size 0x434, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::VectorImageRenderInfo* Register(::UnityEngine::UIElements::VectorImage* vi, ::UnityEngine::UIElements::VisualElement* context);

  // Ctor Parameters [CppParam { name: "", ty: "VectorImageManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VectorImageManager(VectorImageManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VectorImageManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VectorImageManager(VectorImageManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VectorImageManager();

public:
  /// @brief Field m_Atlas, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::AtlasBase* ___m_Atlas;

  /// @brief Field m_Registered, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::UIElements::VectorImage>, ::UnityEngine::UIElements::UIR::VectorImageRenderInfo*>* ___m_Registered;

  /// @brief Field m_RenderInfoPool, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::VectorImageRenderInfoPool* ___m_RenderInfoPool;

  /// @brief Field m_GradientRemapPool, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::GradientRemapPool* ___m_GradientRemapPool;

  /// @brief Field m_GradientSettingsAtlas, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::GradientSettingsAtlas* ___m_GradientSettingsAtlas;

  /// @brief Field m_LoggedExhaustedSettingsAtlas, offset: 0x38, size: 0x1, def value: None
  bool ___m_LoggedExhaustedSettingsAtlas;

  /// @brief Field <disposed>k__BackingField, offset: 0x39, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::VectorImageManager, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::VectorImageManager, ___m_Atlas) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::VectorImageManager, ___m_Registered) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::VectorImageManager, ___m_RenderInfoPool) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::VectorImageManager, ___m_GradientRemapPool) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::VectorImageManager, ___m_GradientSettingsAtlas) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::VectorImageManager, ___m_LoggedExhaustedSettingsAtlas) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::VectorImageManager, ____disposed_k__BackingField) == 0x39, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::VectorImageManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::VectorImageManager*, "UnityEngine.UIElements.UIR", "VectorImageManager");
