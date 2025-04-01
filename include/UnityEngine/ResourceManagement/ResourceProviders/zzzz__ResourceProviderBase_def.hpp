#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/ResourceProviderBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__IResourceProvider_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProviderBehaviourFlags_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__IInitializableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ResourceProviderBase)
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProvideHandle;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProviderBehaviourFlags;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class ResourceProviderBase_BaseInitAsyncOp;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class ResourceProviderBase___c__DisplayClass10_0;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class ResourceProviderBase;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class ResourceProviderBase_BaseInitAsyncOp;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class ResourceProviderBase___c__DisplayClass10_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase___c__DisplayClass10_0);
// Dependencies UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject>
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase/BaseInitAsyncOp
class CORDL_TYPE ResourceProviderBase_BaseInitAsyncOp : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool> {
public:
  // Declarations
  /// @brief Field m_CallBack, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CallBack, put = __cordl_internal_set_m_CallBack)) ::System::Func_1<bool>* m_CallBack;

  /// @brief Method Execute, addr 0x479ab40, size 0x88, virtual true, abstract: false, final false
  inline void Execute();

  /// @brief Method Init, addr 0x479aac8, size 0x8, virtual false, abstract: false, final false
  inline void Init(::System::Func_1<bool>* callback);

  /// @brief Method InvokeWaitForCompletion, addr 0x479aad0, size 0x70, virtual true, abstract: false, final false
  inline bool InvokeWaitForCompletion();

  static inline ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp* New_ctor();

  constexpr ::System::Func_1<bool>* const& __cordl_internal_get_m_CallBack() const;

  constexpr ::System::Func_1<bool>*& __cordl_internal_get_m_CallBack();

  constexpr void __cordl_internal_set_m_CallBack(::System::Func_1<bool>* value);

  /// @brief Method .ctor, addr 0x479aa78, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceProviderBase_BaseInitAsyncOp();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResourceProviderBase_BaseInitAsyncOp", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourceProviderBase_BaseInitAsyncOp(ResourceProviderBase_BaseInitAsyncOp&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourceProviderBase_BaseInitAsyncOp", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourceProviderBase_BaseInitAsyncOp(ResourceProviderBase_BaseInitAsyncOp const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15678 };

  /// @brief Field m_CallBack, offset: 0x98, size: 0x8, def value: None
  ::System::Func_1<bool>* ___m_CallBack;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp, ___m_CallBack) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp, 0xa0>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
// Dependencies System.Object
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase/<>c__DisplayClass10_0
class CORDL_TYPE ResourceProviderBase___c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase* __4__this;

  /// @brief Field data, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::StringW data;

  /// @brief Field id, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_id, put = __cordl_internal_set_id)) ::StringW id;

  static inline ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase___c__DisplayClass10_0* New_ctor();

  /// @brief Method <InitializeAsync>b__0, addr 0x479abc8, size 0x2c, virtual false, abstract: false, final false
  inline bool _InitializeAsync_b__0();

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase* const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*& __cordl_internal_get___4__this();

  constexpr ::StringW const& __cordl_internal_get_data() const;

  constexpr ::StringW& __cordl_internal_get_data();

  constexpr ::StringW const& __cordl_internal_get_id() const;

  constexpr ::StringW& __cordl_internal_get_id();

  constexpr void __cordl_internal_set___4__this(::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase* value);

  constexpr void __cordl_internal_set_data(::StringW value);

  constexpr void __cordl_internal_set_id(::StringW value);

  /// @brief Method .ctor, addr 0x479aa70, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceProviderBase___c__DisplayClass10_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResourceProviderBase___c__DisplayClass10_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourceProviderBase___c__DisplayClass10_0(ResourceProviderBase___c__DisplayClass10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourceProviderBase___c__DisplayClass10_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourceProviderBase___c__DisplayClass10_0(ResourceProviderBase___c__DisplayClass10_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15679 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase* _____4__this;

  /// @brief Field id, offset: 0x18, size: 0x8, def value: None
  ::StringW ___id;

  /// @brief Field data, offset: 0x20, size: 0x8, def value: None
  ::StringW ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase___c__DisplayClass10_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase___c__DisplayClass10_0, ___id) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase___c__DisplayClass10_0, ___data) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase___c__DisplayClass10_0, 0x28>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
// Dependencies System.Object, UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider, UnityEngine.ResourceManagement.ResourceProviders.ProviderBehaviourFlags,
// UnityEngine.ResourceManagement.Util.IInitializableObject
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
class CORDL_TYPE ResourceProviderBase : public ::System::Object {
public:
  // Declarations
  using BaseInitAsyncOp = ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp;

  using __c__DisplayClass10_0 = ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase___c__DisplayClass10_0;

  __declspec(property(get = get_ProviderId)) ::StringW ProviderId;

  __declspec(property(get = UnityEngine_ResourceManagement_ResourceProviders_IResourceProvider_get_BehaviourFlags)) ::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags
      UnityEngine_ResourceManagement_ResourceProviders_IResourceProvider_BehaviourFlags;

  /// @brief Field m_BehaviourFlags, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BehaviourFlags,
                      put = __cordl_internal_set_m_BehaviourFlags)) ::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags m_BehaviourFlags;

  /// @brief Field m_ProviderId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProviderId, put = __cordl_internal_set_m_ProviderId)) ::StringW m_ProviderId;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider"
  constexpr operator ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*() noexcept;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::IInitializableObject"
  constexpr operator ::UnityEngine::ResourceManagement::Util::IInitializableObject*() noexcept;

  /// @brief Method CanProvide, addr 0x479a864, size 0x40, virtual true, abstract: false, final false
  inline bool CanProvide(::System::Type* t, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  /// @brief Method GetDefaultType, addr 0x479a8b4, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Type* GetDefaultType(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  /// @brief Method Initialize, addr 0x479a840, size 0x24, virtual true, abstract: false, final false
  inline bool Initialize(::StringW id, ::StringW data);

  /// @brief Method InitializeAsync, addr 0x479a920, size 0x150, virtual true, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> InitializeAsync(::UnityEngine::ResourceManagement::ResourceManager* rm, ::StringW id, ::StringW data);

  static inline ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase* New_ctor();

  /// @brief Method Provide, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle);

  /// @brief Method Release, addr 0x479a8b0, size 0x4, virtual true, abstract: false, final false
  inline void Release(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::System::Object* obj);

  /// @brief Method ToString, addr 0x479a8a4, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider.get_BehaviourFlags, addr 0x479aac0, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags UnityEngine_ResourceManagement_ResourceProviders_IResourceProvider_get_BehaviourFlags();

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags const& __cordl_internal_get_m_BehaviourFlags() const;

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags& __cordl_internal_get_m_BehaviourFlags();

  constexpr ::StringW const& __cordl_internal_get_m_ProviderId() const;

  constexpr ::StringW& __cordl_internal_get_m_ProviderId();

  constexpr void __cordl_internal_set_m_BehaviourFlags(::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags value);

  constexpr void __cordl_internal_set_m_ProviderId(::StringW value);

  /// @brief Method .ctor, addr 0x47973ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ProviderId, addr 0x479a7f0, size 0x50, virtual true, abstract: false, final false
  inline ::StringW get_ProviderId();

  /// @brief Convert to "::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider"
  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider* i___UnityEngine__ResourceManagement__ResourceProviders__IResourceProvider() noexcept;

  /// @brief Convert to "::UnityEngine::ResourceManagement::Util::IInitializableObject"
  constexpr ::UnityEngine::ResourceManagement::Util::IInitializableObject* i___UnityEngine__ResourceManagement__Util__IInitializableObject() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceProviderBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResourceProviderBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourceProviderBase(ResourceProviderBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourceProviderBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourceProviderBase(ResourceProviderBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15680 };

  /// @brief Field m_ProviderId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_ProviderId;

  /// @brief Field m_BehaviourFlags, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags ___m_BehaviourFlags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase, ___m_ProviderId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase, ___m_BehaviourFlags) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*, "UnityEngine.ResourceManagement.ResourceProviders", "ResourceProviderBase");
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase_BaseInitAsyncOp*, "UnityEngine.ResourceManagement.ResourceProviders",
                       "ResourceProviderBase/BaseInitAsyncOp");
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase___c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase___c__DisplayClass10_0*, "UnityEngine.ResourceManagement.ResourceProviders",
                       "ResourceProviderBase/<>c__DisplayClass10_0");
