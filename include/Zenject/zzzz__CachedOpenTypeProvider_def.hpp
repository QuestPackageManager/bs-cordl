#pragma once
// IWYU pragma private; include "Zenject/CachedOpenTypeProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CachedOpenTypeProvider)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Zenject {
class CachedProvider;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class __CachedOpenTypeProvider____c;
}
// Forward declare root types
namespace Zenject {
class CachedOpenTypeProvider;
}
namespace Zenject {
class __CachedOpenTypeProvider____c;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::CachedOpenTypeProvider);
MARK_REF_PTR_T(::Zenject::__CachedOpenTypeProvider____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::CachedOpenTypeProvider::<>c*
class CORDL_TYPE __CachedOpenTypeProvider____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Zenject::__CachedOpenTypeProvider____c* __9;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__8_0, put = setStaticF___9__8_0)) ::System::Func_2<::Zenject::CachedProvider*, int32_t>* __9__8_0;

  static inline ::Zenject::__CachedOpenTypeProvider____c* New_ctor();

  /// @brief Method __zenCreate, addr 0x4ac0098, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4ac00ec, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4abfff0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_NumInstances>b__8_0, addr 0x4abfff8, size 0x54, virtual false, abstract: false, final false
  inline int32_t _get_NumInstances_b__8_0(::Zenject::CachedProvider* x);

  static inline ::Zenject::__CachedOpenTypeProvider____c* getStaticF___9();

  static inline ::System::Func_2<::Zenject::CachedProvider*, int32_t>* getStaticF___9__8_0();

  static inline void setStaticF___9(::Zenject::__CachedOpenTypeProvider____c* value);

  static inline void setStaticF___9__8_0(::System::Func_2<::Zenject::CachedProvider*, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CachedOpenTypeProvider____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CachedOpenTypeProvider____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CachedOpenTypeProvider____c(__CachedOpenTypeProvider____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CachedOpenTypeProvider____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CachedOpenTypeProvider____c(__CachedOpenTypeProvider____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12476 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__CachedOpenTypeProvider____c, 0x10>, "Size mismatch!");

} // namespace Zenject
// Type: Zenject::CachedOpenTypeProvider
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::CachedOpenTypeProvider*
class CORDL_TYPE CachedOpenTypeProvider : public ::System::Object {
public:
  // Declarations
  using __c = ::Zenject::__CachedOpenTypeProvider____c;

  __declspec(property(get = get_IsCached)) bool IsCached;

  __declspec(property(get = get_NumInstances)) int32_t NumInstances;

  __declspec(property(get = get_TypeVariesBasedOnMemberType)) bool TypeVariesBasedOnMemberType;

  /// @brief Field _creator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__creator, put = __cordl_internal_set__creator)) ::Zenject::IProvider* _creator;

  /// @brief Field _providerMap, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__providerMap,
                      put = __cordl_internal_set__providerMap)) ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::CachedProvider*>* _providerMap;

  /// @brief Convert operator to "::Zenject::IProvider"
  constexpr operator ::Zenject::IProvider*() noexcept;

  /// @brief Method ClearCache, addr 0x4abfac4, size 0x50, virtual false, abstract: false, final false
  inline void ClearCache();

  /// @brief Method GetAllInstancesWithInjectSplit, addr 0x4abfbc0, size 0x138, virtual true, abstract: false, final true
  inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ByRef<::System::Action*> injectAction,
                                             ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  /// @brief Method GetInstanceType, addr 0x4abfb14, size 0xac, virtual true, abstract: false, final true
  inline ::System::Type* GetInstanceType(::Zenject::InjectContext* context);

  static inline ::Zenject::CachedOpenTypeProvider* New_ctor(::Zenject::IProvider* creator);

  constexpr ::Zenject::IProvider*& __cordl_internal_get__creator();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::IProvider*> const& __cordl_internal_get__creator() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::CachedProvider*>*& __cordl_internal_get__providerMap();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::CachedProvider*>*> const& __cordl_internal_get__providerMap() const;

  constexpr void __cordl_internal_set__creator(::Zenject::IProvider* value);

  constexpr void __cordl_internal_set__providerMap(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::CachedProvider*>* value);

  /// @brief Method .ctor, addr 0x4abf860, size 0x108, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::IProvider* creator);

  /// @brief Method get_IsCached, addr 0x4abf968, size 0x8, virtual true, abstract: false, final true
  inline bool get_IsCached();

  /// @brief Method get_NumInstances, addr 0x4abf998, size 0x12c, virtual false, abstract: false, final false
  inline int32_t get_NumInstances();

  /// @brief Method get_TypeVariesBasedOnMemberType, addr 0x4abf970, size 0x28, virtual true, abstract: false, final true
  inline bool get_TypeVariesBasedOnMemberType();

  /// @brief Convert to "::Zenject::IProvider"
  constexpr ::Zenject::IProvider* i___Zenject__IProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CachedOpenTypeProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CachedOpenTypeProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CachedOpenTypeProvider(CachedOpenTypeProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CachedOpenTypeProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CachedOpenTypeProvider(CachedOpenTypeProvider const&) = delete;

  /// @brief Field _creator, offset: 0x10, size: 0x8, def value: None
  ::Zenject::IProvider* ____creator;

  /// @brief Field _providerMap, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::CachedProvider*>* ____providerMap;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12477 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::CachedOpenTypeProvider, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::CachedOpenTypeProvider, ____creator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::CachedOpenTypeProvider, ____providerMap) == 0x18, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::CachedOpenTypeProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::CachedOpenTypeProvider*, "Zenject", "CachedOpenTypeProvider");
NEED_NO_BOX(::Zenject::__CachedOpenTypeProvider____c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__CachedOpenTypeProvider____c*, "Zenject", "CachedOpenTypeProvider/<>c");
