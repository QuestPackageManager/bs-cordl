#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(GetFromPrefabComponentProvider)
namespace System {
class Type;
}
namespace Zenject {
class IPrefabInstantiator;
}
namespace System {
class Action;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class InjectContext;
}
// Forward declare root types
namespace Zenject {
class GetFromPrefabComponentProvider;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::GetFromPrefabComponentProvider);
// Type: Zenject::GetFromPrefabComponentProvider
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11189))
// CS Name: ::Zenject::GetFromPrefabComponentProvider*
class CORDL_TYPE GetFromPrefabComponentProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field _prefabInstantiator, offset 0x10, size 0x8
  __declspec(property(get = __get__prefabInstantiator, put = __set__prefabInstantiator))::Zenject::IPrefabInstantiator* _prefabInstantiator;

  /// @brief Field _componentType, offset 0x18, size 0x8
  __declspec(property(get = __get__componentType, put = __set__componentType))::System::Type* _componentType;

  /// @brief Field _matchSingle, offset 0x20, size 0x1
  __declspec(property(get = __get__matchSingle, put = __set__matchSingle)) bool _matchSingle;

  __declspec(property(get = get_IsCached)) bool IsCached;

  __declspec(property(get = get_TypeVariesBasedOnMemberType)) bool TypeVariesBasedOnMemberType;

  /// @brief Convert operator to "::Zenject::IProvider"
  constexpr operator ::Zenject::IProvider*() noexcept;

  constexpr ::Zenject::IPrefabInstantiator*& __get__prefabInstantiator();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::IPrefabInstantiator*> const& __get__prefabInstantiator() const;

  constexpr void __set__prefabInstantiator(::Zenject::IPrefabInstantiator* value);

  constexpr ::System::Type*& __get__componentType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__componentType() const;

  constexpr void __set__componentType(::System::Type* value);

  constexpr bool& __get__matchSingle();

  constexpr bool const& __get__matchSingle() const;

  constexpr void __set__matchSingle(bool value);

  static inline ::Zenject::GetFromPrefabComponentProvider* New_ctor(::System::Type* componentType, ::Zenject::IPrefabInstantiator* prefabInstantiator, bool matchSingle);

  /// @brief Method .ctor addr 0x2f070e4 size 0x3c virtual false final false
  inline void _ctor(::System::Type* componentType, ::Zenject::IPrefabInstantiator* prefabInstantiator, bool matchSingle);

  /// @brief Method get_IsCached addr 0x2f07120 size 0x8 virtual true final true
  inline bool get_IsCached();

  /// @brief Method get_TypeVariesBasedOnMemberType addr 0x2f07128 size 0x8 virtual true final true
  inline bool get_TypeVariesBasedOnMemberType();

  /// @brief Method GetInstanceType addr 0x2f07130 size 0x8 virtual true final true
  inline ::System::Type* GetInstanceType(::Zenject::InjectContext* context);

  /// @brief Method GetAllInstancesWithInjectSplit addr 0x2f07138 size 0x304 virtual true final true
  inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ByRef<::System::Action*> injectAction,
                                             ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  // Ctor Parameters [CppParam { name: "", ty: "GetFromPrefabComponentProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetFromPrefabComponentProvider(GetFromPrefabComponentProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetFromPrefabComponentProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetFromPrefabComponentProvider(GetFromPrefabComponentProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetFromPrefabComponentProvider();

public:
  /// @brief Field _prefabInstantiator, offset: 0x10, size: 0x8, def value: None
  ::Zenject::IPrefabInstantiator* ____prefabInstantiator;

  /// @brief Field _componentType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ____componentType;

  /// @brief Field _matchSingle, offset: 0x20, size: 0x1, def value: None
  bool ____matchSingle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::GetFromPrefabComponentProvider, 0x28>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::GetFromPrefabComponentProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::GetFromPrefabComponentProvider*, "Zenject", "GetFromPrefabComponentProvider");
