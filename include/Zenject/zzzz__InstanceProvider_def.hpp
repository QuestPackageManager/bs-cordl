#pragma once
// IWYU pragma private; include "Zenject/InstanceProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
CORDL_MODULE_EXPORT(InstanceProvider)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
class InstanceProvider;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::InstanceProvider);
// Dependencies System.Object, Zenject.IProvider
namespace Zenject {
// Is value type: false
// CS Name: Zenject.InstanceProvider
class CORDL_TYPE InstanceProvider : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsCached)) bool IsCached;

  __declspec(property(get = get_TypeVariesBasedOnMemberType)) bool TypeVariesBasedOnMemberType;

  /// @brief Field _container, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Field _instance, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__instance, put = __cordl_internal_set__instance)) ::System::Object* _instance;

  /// @brief Field _instanceType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__instanceType, put = __cordl_internal_set__instanceType)) ::System::Type* _instanceType;

  /// @brief Convert operator to "::Zenject::IProvider"
  constexpr operator ::Zenject::IProvider*() noexcept;

  /// @brief Method GetAllInstancesWithInjectSplit, addr 0x4b3daec, size 0x1a8, virtual true, abstract: false, final true
  inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::ByRef<::System::Action*> injectAction,
                                             ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  /// @brief Method GetInstanceType, addr 0x4b3dae4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Type* GetInstanceType(::Zenject::InjectContext* context);

  static inline ::Zenject::InstanceProvider* New_ctor(::System::Type* instanceType, ::System::Object* instance, ::Zenject::DiContainer* container);

  /// @brief Method <GetAllInstancesWithInjectSplit>b__9_0, addr 0x4b3dc94, size 0x54, virtual false, abstract: false, final false
  inline void _GetAllInstancesWithInjectSplit_b__9_0();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::System::Object* const& __cordl_internal_get__instance() const;

  constexpr ::System::Object*& __cordl_internal_get__instance();

  constexpr ::System::Type* const& __cordl_internal_get__instanceType() const;

  constexpr ::System::Type*& __cordl_internal_get__instanceType();

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__instance(::System::Object* value);

  constexpr void __cordl_internal_set__instanceType(::System::Type* value);

  /// @brief Method .ctor, addr 0x4b3da98, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* instanceType, ::System::Object* instance, ::Zenject::DiContainer* container);

  /// @brief Method get_IsCached, addr 0x4b3dad4, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsCached();

  /// @brief Method get_TypeVariesBasedOnMemberType, addr 0x4b3dadc, size 0x8, virtual true, abstract: false, final true
  inline bool get_TypeVariesBasedOnMemberType();

  /// @brief Convert to "::Zenject::IProvider"
  constexpr ::Zenject::IProvider* i___Zenject__IProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InstanceProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstanceProvider(InstanceProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstanceProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstanceProvider(InstanceProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12545 };

  /// @brief Field _instance, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____instance;

  /// @brief Field _instanceType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ____instanceType;

  /// @brief Field _container, offset: 0x20, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::InstanceProvider, ____instance) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::InstanceProvider, ____instanceType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::InstanceProvider, ____container) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::InstanceProvider, 0x28>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::InstanceProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InstanceProvider*, "Zenject", "InstanceProvider");
