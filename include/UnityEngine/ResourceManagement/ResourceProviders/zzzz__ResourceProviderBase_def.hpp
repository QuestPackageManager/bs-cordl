#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProviderBehaviourFlags_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ResourceProviderBase)
namespace UnityEngine::ResourceManagement::AsyncOperations {
template <typename TObject> struct AsyncOperationHandle_1;
}
namespace System {
class Object;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class __ResourceProviderBase____c__DisplayClass10_0;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class __ResourceProviderBase__BaseInitAsyncOp;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IResourceProvider;
}
namespace UnityEngine::ResourceManagement::Util {
class IInitializableObject;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProvideHandle;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProviderBehaviourFlags;
}
namespace System {
class Type;
}
namespace System {
template <typename TResult> class Func_1;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class ResourceProviderBase;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class __ResourceProviderBase__BaseInitAsyncOp;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class __ResourceProviderBase____c__DisplayClass10_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp);
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase____c__DisplayClass10_0);
// Type: ::BaseInitAsyncOp
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14032)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14032), inst: 105 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14011))
// CS Name: ::ResourceProviderBase::BaseInitAsyncOp*
class CORDL_TYPE __ResourceProviderBase__BaseInitAsyncOp : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<bool> {
public:
  // Declarations
  /// @brief Field m_CallBack, offset 0x88, size 0x8
  __declspec(property(get = __get_m_CallBack, put = __set_m_CallBack))::System::Func_1<bool>* m_CallBack;

  constexpr ::System::Func_1<bool>*& __get_m_CallBack();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<bool>*> const& __get_m_CallBack() const;

  constexpr void __set_m_CallBack(::System::Func_1<bool>* value);

  /// @brief Method Init, addr 0x2bd8290, size 0x8, virtual false, abstract: false, final false
  inline void Init(::System::Func_1<bool>* callback);

  /// @brief Method InvokeWaitForCompletion, addr 0x2bd8298, size 0x70, virtual true, abstract: false, final false
  inline bool InvokeWaitForCompletion();

  /// @brief Method Execute, addr 0x2bd8308, size 0x88, virtual true, abstract: false, final false
  inline void Execute();

  static inline ::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp* New_ctor();

  /// @brief Method .ctor, addr 0x2bd8240, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__ResourceProviderBase__BaseInitAsyncOp", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ResourceProviderBase__BaseInitAsyncOp(__ResourceProviderBase__BaseInitAsyncOp&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ResourceProviderBase__BaseInitAsyncOp", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ResourceProviderBase__BaseInitAsyncOp(__ResourceProviderBase__BaseInitAsyncOp const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ResourceProviderBase__BaseInitAsyncOp();

public:
  /// @brief Field m_CallBack, offset: 0x88, size: 0x8, def value: None
  ::System::Func_1<bool>* ___m_CallBack;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp, 0x90>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp, ___m_CallBack) == 0x88, "Offset mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
// Type: ::<>c__DisplayClass10_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14012))
// CS Name: ::ResourceProviderBase::<>c__DisplayClass10_0*
class CORDL_TYPE __ResourceProviderBase____c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase* __4__this;

  /// @brief Field id, offset 0x18, size 0x8
  __declspec(property(get = __get_id, put = __set_id))::StringW id;

  /// @brief Field data, offset 0x20, size 0x8
  __declspec(property(get = __get_data, put = __set_data))::StringW data;

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*> const& __get___4__this() const;

  constexpr void __set___4__this(::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase* value);

  constexpr ::StringW& __get_id();

  constexpr ::StringW const& __get_id() const;

  constexpr void __set_id(::StringW value);

  constexpr ::StringW& __get_data();

  constexpr ::StringW const& __get_data() const;

  constexpr void __set_data(::StringW value);

  static inline ::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase____c__DisplayClass10_0* New_ctor();

  /// @brief Method .ctor, addr 0x2bd8238, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <InitializeAsync>b__0, addr 0x2bd8390, size 0x2c, virtual false, abstract: false, final false
  inline bool _InitializeAsync_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__ResourceProviderBase____c__DisplayClass10_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ResourceProviderBase____c__DisplayClass10_0(__ResourceProviderBase____c__DisplayClass10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ResourceProviderBase____c__DisplayClass10_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ResourceProviderBase____c__DisplayClass10_0(__ResourceProviderBase____c__DisplayClass10_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ResourceProviderBase____c__DisplayClass10_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase* _____4__this;

  /// @brief Field id, offset: 0x18, size: 0x8, def value: None
  ::StringW ___id;

  /// @brief Field data, offset: 0x20, size: 0x8, def value: None
  ::StringW ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase____c__DisplayClass10_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase____c__DisplayClass10_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase____c__DisplayClass10_0, ___id) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase____c__DisplayClass10_0, ___data) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
// Type: UnityEngine.ResourceManagement.ResourceProviders::ResourceProviderBase
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14001))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14013))
// CS Name: ::UnityEngine.ResourceManagement.ResourceProviders::ResourceProviderBase*
class CORDL_TYPE ResourceProviderBase : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass10_0 = ::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase____c__DisplayClass10_0;

  using BaseInitAsyncOp = ::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp;

  /// @brief Field m_ProviderId, offset 0x10, size 0x8
  __declspec(property(get = __get_m_ProviderId, put = __set_m_ProviderId))::StringW m_ProviderId;

  /// @brief Field m_BehaviourFlags, offset 0x18, size 0x4
  __declspec(property(get = __get_m_BehaviourFlags, put = __set_m_BehaviourFlags))::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags m_BehaviourFlags;

  __declspec(property(get = get_ProviderId))::StringW ProviderId;

  __declspec(property(get = UnityEngine_ResourceManagement_ResourceProviders_IResourceProvider_get_BehaviourFlags))::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags
      UnityEngine_ResourceManagement_ResourceProviders_IResourceProvider_BehaviourFlags;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider"
  constexpr operator ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*() noexcept;

  /// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::IInitializableObject"
  constexpr operator ::UnityEngine::ResourceManagement::Util::IInitializableObject*() noexcept;

  constexpr ::StringW& __get_m_ProviderId();

  constexpr ::StringW const& __get_m_ProviderId() const;

  constexpr void __set_m_ProviderId(::StringW value);

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags& __get_m_BehaviourFlags();

  constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags const& __get_m_BehaviourFlags() const;

  constexpr void __set_m_BehaviourFlags(::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags value);

  /// @brief Method get_ProviderId, addr 0x2bd7fb4, size 0x50, virtual true, abstract: false, final false
  inline ::StringW get_ProviderId();

  /// @brief Method Initialize, addr 0x2bd8004, size 0x24, virtual true, abstract: false, final false
  inline bool Initialize(::StringW id, ::StringW data);

  /// @brief Method CanProvide, addr 0x2bd8028, size 0x40, virtual true, abstract: false, final false
  inline bool CanProvide(::System::Type* t, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  /// @brief Method ToString, addr 0x2bd8068, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method Release, addr 0x2bd8074, size 0x4, virtual true, abstract: false, final false
  inline void Release(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location, ::System::Object* obj);

  /// @brief Method GetDefaultType, addr 0x2bd8078, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Type* GetDefaultType(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation* location);

  /// @brief Method Provide, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle);

  /// @brief Method InitializeAsync, addr 0x2bd80e4, size 0x154, virtual true, abstract: false, final false
  inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> InitializeAsync(::UnityEngine::ResourceManagement::ResourceManager* rm, ::StringW id, ::StringW data);

  /// @brief Method UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider.get_BehaviourFlags, addr 0x2bd8288, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags UnityEngine_ResourceManagement_ResourceProviders_IResourceProvider_get_BehaviourFlags();

  static inline ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase* New_ctor();

  /// @brief Method .ctor, addr 0x2bd5b2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ResourceProviderBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResourceProviderBase(ResourceProviderBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResourceProviderBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResourceProviderBase(ResourceProviderBase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResourceProviderBase();

public:
  /// @brief Field m_ProviderId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_ProviderId;

  /// @brief Field m_BehaviourFlags, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::ResourceManagement::ResourceProviders::ProviderBehaviourFlags ___m_BehaviourFlags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase, ___m_ProviderId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase, ___m_BehaviourFlags) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase*, "UnityEngine.ResourceManagement.ResourceProviders", "ResourceProviderBase");
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase__BaseInitAsyncOp*, "UnityEngine.ResourceManagement.ResourceProviders",
                       "ResourceProviderBase/BaseInitAsyncOp");
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase____c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::__ResourceProviderBase____c__DisplayClass10_0*, "UnityEngine.ResourceManagement.ResourceProviders",
                       "ResourceProviderBase/<>c__DisplayClass10_0");
