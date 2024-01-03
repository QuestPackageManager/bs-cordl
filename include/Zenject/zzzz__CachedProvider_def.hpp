#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CachedProvider)
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
class IProvider;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
class CachedProvider;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::CachedProvider);
// Type: Zenject::CachedProvider
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11179))
// CS Name: ::Zenject::CachedProvider*
class CORDL_TYPE CachedProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field _creator, offset 0x10, size 0x8
  __declspec(property(get = __get__creator, put = __set__creator))::Zenject::IProvider* _creator;

  /// @brief Field _instances, offset 0x18, size 0x8
  __declspec(property(get = __get__instances, put = __set__instances))::System::Collections::Generic::List_1<::System::Object*>* _instances;

  /// @brief Field _isCreatingInstance, offset 0x20, size 0x1
  __declspec(property(get = __get__isCreatingInstance, put = __set__isCreatingInstance)) bool _isCreatingInstance;

  __declspec(property(get = get_IsCached)) bool IsCached;

  __declspec(property(get = get_TypeVariesBasedOnMemberType)) bool TypeVariesBasedOnMemberType;

  __declspec(property(get = get_NumInstances)) int32_t NumInstances;

  /// @brief Convert operator to "::Zenject::IProvider"
  constexpr operator ::Zenject::IProvider*() noexcept;

  /// @brief Convert to "::Zenject::IProvider"
  constexpr ::Zenject::IProvider* i___Zenject__IProvider() noexcept;

  constexpr ::Zenject::IProvider*& __get__creator();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::IProvider*> const& __get__creator() const;

  constexpr void __set__creator(::Zenject::IProvider* value);

  constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __get__instances();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Object*>*> const& __get__instances() const;

  constexpr void __set__instances(::System::Collections::Generic::List_1<::System::Object*>* value);

  constexpr bool& __get__isCreatingInstance();

  constexpr bool const& __get__isCreatingInstance() const;

  constexpr void __set__isCreatingInstance(bool value);

  static inline ::Zenject::CachedProvider* New_ctor(::Zenject::IProvider* creator);

  /// @brief Method .ctor, addr 0x2f052dc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::IProvider* creator);

  /// @brief Method get_IsCached, addr 0x2f058b4, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsCached();

  /// @brief Method get_TypeVariesBasedOnMemberType, addr 0x2f058bc, size 0x28, virtual true, abstract: false, final true
  inline bool get_TypeVariesBasedOnMemberType();

  /// @brief Method get_NumInstances, addr 0x2f0564c, size 0x4c, virtual false, abstract: false, final false
  inline int32_t get_NumInstances();

  /// @brief Method ClearCache, addr 0x2f058e4, size 0x8, virtual false, abstract: false, final false
  inline void ClearCache();

  /// @brief Method GetInstanceType, addr 0x2f058ec, size 0xac, virtual true, abstract: false, final true
  inline ::System::Type* GetInstanceType(::Zenject::InjectContext* context);

  /// @brief Method GetAllInstancesWithInjectSplit, addr 0x2f05304, size 0x288, virtual true, abstract: false, final true
  inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ByRef<::System::Action*> injectAction,
                                             ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  // Ctor Parameters [CppParam { name: "", ty: "CachedProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CachedProvider(CachedProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CachedProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CachedProvider(CachedProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CachedProvider();

public:
  /// @brief Field _creator, offset: 0x10, size: 0x8, def value: None
  ::Zenject::IProvider* ____creator;

  /// @brief Field _instances, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Object*>* ____instances;

  /// @brief Field _isCreatingInstance, offset: 0x20, size: 0x1, def value: None
  bool ____isCreatingInstance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::CachedProvider, 0x28>, "Size mismatch!");

static_assert(offsetof(::Zenject::CachedProvider, ____creator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::CachedProvider, ____instances) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::CachedProvider, ____isCreatingInstance) == 0x20, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::CachedProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::CachedProvider*, "Zenject", "CachedProvider");
