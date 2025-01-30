#pragma once
// IWYU pragma private; include "Unity/Properties/TypeUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Properties/zzzz__ITypeVisitor_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TypeUtility)
namespace System::Collections::Concurrent {
template <typename TKey, typename TValue> class ConcurrentDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Unity::Properties {
template <typename T> class IConstructor_1;
}
namespace Unity::Properties {
template <typename T> struct TypeUtility_Cache_1;
}
namespace Unity::Properties {
template <typename T> class TypeUtility_ITypeConstructor_1;
}
namespace Unity::Properties {
class TypeUtility_ITypeConstructor;
}
namespace Unity::Properties {
class TypeUtility_NonConstructable;
}
namespace Unity::Properties {
class TypeUtility_TypeConstructorVisitor;
}
namespace Unity::Properties {
template <typename T> class TypeUtility_TypeConstructor_1;
}
namespace Unity::Properties {
class TypeUtility___c;
}
namespace UnityEngine::Pool {
template <typename T> class ObjectPool_1;
}
// Forward declare root types
namespace Unity::Properties {
class TypeUtility;
}
namespace Unity::Properties {
class TypeUtility_ITypeConstructor;
}
namespace Unity::Properties {
template <typename T> class TypeUtility_ITypeConstructor_1;
}
namespace Unity::Properties {
class TypeUtility_NonConstructable;
}
namespace Unity::Properties {
class TypeUtility_TypeConstructorVisitor;
}
namespace Unity::Properties {
template <typename T> class TypeUtility_TypeConstructor_1;
}
namespace Unity::Properties {
class TypeUtility___c;
}
namespace Unity::Properties {
template <typename T> struct TypeUtility_Cache_1;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::TypeUtility);
MARK_REF_PTR_T(::Unity::Properties::TypeUtility_ITypeConstructor);
MARK_GEN_REF_PTR_T(::Unity::Properties::TypeUtility_ITypeConstructor_1);
MARK_REF_PTR_T(::Unity::Properties::TypeUtility_NonConstructable);
MARK_REF_PTR_T(::Unity::Properties::TypeUtility_TypeConstructorVisitor);
MARK_GEN_REF_PTR_T(::Unity::Properties::TypeUtility_TypeConstructor_1);
MARK_REF_PTR_T(::Unity::Properties::TypeUtility___c);
MARK_GEN_VAL_T(::Unity::Properties::TypeUtility_Cache_1);
// Dependencies
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.TypeUtility/ITypeConstructor
class CORDL_TYPE TypeUtility_ITypeConstructor {
public:
  // Declarations
  __declspec(property(get = get_CanBeInstantiated)) bool CanBeInstantiated;

  /// @brief Method Instantiate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* Instantiate();

  /// @brief Method get_CanBeInstantiated, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_CanBeInstantiated();

  // Ctor Parameters [CppParam { name: "", ty: "TypeUtility_ITypeConstructor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeUtility_ITypeConstructor(TypeUtility_ITypeConstructor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17479 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
// Dependencies Unity.Properties.TypeUtility::ITypeConstructor
namespace Unity::Properties {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Unity.Properties.TypeUtility/ITypeConstructor`1<T>
class CORDL_TYPE TypeUtility_ITypeConstructor_1 {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Properties::TypeUtility_ITypeConstructor"
  constexpr operator ::Unity::Properties::TypeUtility_ITypeConstructor*() noexcept;

  /// @brief Method Instantiate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T Instantiate();

  /// @brief Method SetExplicitConstructor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetExplicitConstructor(::System::Func_1<T>* constructor);

  /// @brief Convert to "::Unity::Properties::TypeUtility_ITypeConstructor"
  constexpr ::Unity::Properties::TypeUtility_ITypeConstructor* i___Unity__Properties__TypeUtility_ITypeConstructor() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "TypeUtility_ITypeConstructor_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeUtility_ITypeConstructor_1(TypeUtility_ITypeConstructor_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17480 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
// Dependencies System.Object, Unity.Properties.TypeUtility::ITypeConstructor, Unity.Properties.TypeUtility::ITypeConstructor`1<T>
namespace Unity::Properties {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Unity.Properties.TypeUtility/TypeConstructor`1<T>
class CORDL_TYPE TypeUtility_TypeConstructor_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated)) bool Unity_Properties_TypeUtility_ITypeConstructor_CanBeInstantiated;

  /// @brief Field m_ExplicitConstructor, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ExplicitConstructor, put = __cordl_internal_set_m_ExplicitConstructor)) ::System::Func_1<T>* m_ExplicitConstructor;

  /// @brief Field m_ImplicitConstructor, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ImplicitConstructor, put = __cordl_internal_set_m_ImplicitConstructor)) ::System::Func_1<T>* m_ImplicitConstructor;

  /// @brief Field m_OverrideConstructor, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OverrideConstructor, put = __cordl_internal_set_m_OverrideConstructor)) ::Unity::Properties::IConstructor_1<T>* m_OverrideConstructor;

  /// @brief Convert operator to "::Unity::Properties::TypeUtility_ITypeConstructor"
  constexpr operator ::Unity::Properties::TypeUtility_ITypeConstructor*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::TypeUtility_ITypeConstructor_1<T>"
  constexpr operator ::Unity::Properties::TypeUtility_ITypeConstructor_1<T>*() noexcept;

  /// @brief Method CreateClassInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T CreateClassInstance();

  /// @brief Method CreateScriptableObjectInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T CreateScriptableObjectInstance();

  /// @brief Method CreateValueTypeInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T CreateValueTypeInstance();

  static inline ::Unity::Properties::TypeUtility_TypeConstructor_1<T>* New_ctor();

  /// @brief Method SetExplicitConstructor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetExplicitConstructor(::System::Func_1<T>* constructor);

  /// @brief Method SetImplicitConstructor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetImplicitConstructor();

  /// @brief Method Unity.Properties.TypeUtility.ITypeConstructor.Instantiate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* Unity_Properties_TypeUtility_ITypeConstructor_Instantiate();

  /// @brief Method Unity.Properties.TypeUtility.ITypeConstructor<T>.Instantiate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T Unity_Properties_TypeUtility_ITypeConstructor_T__Instantiate();

  /// @brief Method Unity.Properties.TypeUtility.ITypeConstructor.get_CanBeInstantiated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated();

  constexpr ::System::Func_1<T>* const& __cordl_internal_get_m_ExplicitConstructor() const;

  constexpr ::System::Func_1<T>*& __cordl_internal_get_m_ExplicitConstructor();

  constexpr ::System::Func_1<T>* const& __cordl_internal_get_m_ImplicitConstructor() const;

  constexpr ::System::Func_1<T>*& __cordl_internal_get_m_ImplicitConstructor();

  constexpr ::Unity::Properties::IConstructor_1<T>* const& __cordl_internal_get_m_OverrideConstructor() const;

  constexpr ::Unity::Properties::IConstructor_1<T>*& __cordl_internal_get_m_OverrideConstructor();

  constexpr void __cordl_internal_set_m_ExplicitConstructor(::System::Func_1<T>* value);

  constexpr void __cordl_internal_set_m_ImplicitConstructor(::System::Func_1<T>* value);

  constexpr void __cordl_internal_set_m_OverrideConstructor(::Unity::Properties::IConstructor_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Unity::Properties::TypeUtility_ITypeConstructor"
  constexpr ::Unity::Properties::TypeUtility_ITypeConstructor* i___Unity__Properties__TypeUtility_ITypeConstructor() noexcept;

  /// @brief Convert to "::Unity::Properties::TypeUtility_ITypeConstructor_1<T>"
  constexpr ::Unity::Properties::TypeUtility_ITypeConstructor_1<T>* i___Unity__Properties__TypeUtility_ITypeConstructor_1_T_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeUtility_TypeConstructor_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeUtility_TypeConstructor_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeUtility_TypeConstructor_1(TypeUtility_TypeConstructor_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeUtility_TypeConstructor_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeUtility_TypeConstructor_1(TypeUtility_TypeConstructor_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17481 };

  /// @brief Field m_ExplicitConstructor, offset: 0x10, size: 0x8, def value: None
  ::System::Func_1<T>* ___m_ExplicitConstructor;

  /// @brief Field m_ImplicitConstructor, offset: 0x18, size: 0x8, def value: None
  ::System::Func_1<T>* ___m_ImplicitConstructor;

  /// @brief Field m_OverrideConstructor, offset: 0x20, size: 0x8, def value: None
  ::Unity::Properties::IConstructor_1<T>* ___m_OverrideConstructor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
// Dependencies System.Object, Unity.Properties.TypeUtility::ITypeConstructor
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.TypeUtility/NonConstructable
class CORDL_TYPE TypeUtility_NonConstructable : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated)) bool Unity_Properties_TypeUtility_ITypeConstructor_CanBeInstantiated;

  /// @brief Convert operator to "::Unity::Properties::TypeUtility_ITypeConstructor"
  constexpr operator ::Unity::Properties::TypeUtility_ITypeConstructor*() noexcept;

  /// @brief Method Instantiate, addr 0x4915c04, size 0x4c, virtual true, abstract: false, final true
  inline ::System::Object* Instantiate();

  static inline ::Unity::Properties::TypeUtility_NonConstructable* New_ctor();

  /// @brief Method Unity.Properties.TypeUtility.ITypeConstructor.get_CanBeInstantiated, addr 0x4915bfc, size 0x8, virtual true, abstract: false, final true
  inline bool Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated();

  /// @brief Method .ctor, addr 0x49157d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Unity::Properties::TypeUtility_ITypeConstructor"
  constexpr ::Unity::Properties::TypeUtility_ITypeConstructor* i___Unity__Properties__TypeUtility_ITypeConstructor() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeUtility_NonConstructable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeUtility_NonConstructable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeUtility_NonConstructable(TypeUtility_NonConstructable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeUtility_NonConstructable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeUtility_NonConstructable(TypeUtility_NonConstructable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17482 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::TypeUtility_NonConstructable, 0x10>, "Size mismatch!");

} // namespace Unity::Properties
// Dependencies
namespace Unity::Properties {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Properties.TypeUtility/Cache`1<T>
#pragma pack(push, 0)
struct CORDL_TYPE TypeUtility_Cache_1 {
public:
  // Declarations
  /// @brief Field TypeConstructor, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TypeConstructor, put = setStaticF_TypeConstructor)) ::Unity::Properties::TypeUtility_ITypeConstructor_1<T>* TypeConstructor;

  static inline ::Unity::Properties::TypeUtility_ITypeConstructor_1<T>* getStaticF_TypeConstructor();

  static inline void setStaticF_TypeConstructor(::Unity::Properties::TypeUtility_ITypeConstructor_1<T>* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeUtility_Cache_1();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17483 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace Unity::Properties
// Dependencies System.Object, Unity.Properties.ITypeVisitor
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.TypeUtility/TypeConstructorVisitor
class CORDL_TYPE TypeUtility_TypeConstructorVisitor : public ::System::Object {
public:
  // Declarations
  /// @brief Field TypeConstructor, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_TypeConstructor, put = __cordl_internal_set_TypeConstructor)) ::Unity::Properties::TypeUtility_ITypeConstructor* TypeConstructor;

  /// @brief Convert operator to "::Unity::Properties::ITypeVisitor"
  constexpr operator ::Unity::Properties::ITypeVisitor*() noexcept;

  static inline ::Unity::Properties::TypeUtility_TypeConstructorVisitor* New_ctor();

  /// @brief Method Visit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename TContainer> inline void Visit();

  constexpr ::Unity::Properties::TypeUtility_ITypeConstructor* const& __cordl_internal_get_TypeConstructor() const;

  constexpr ::Unity::Properties::TypeUtility_ITypeConstructor*& __cordl_internal_get_TypeConstructor();

  constexpr void __cordl_internal_set_TypeConstructor(::Unity::Properties::TypeUtility_ITypeConstructor* value);

  /// @brief Method .ctor, addr 0x49157d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Unity::Properties::ITypeVisitor"
  constexpr ::Unity::Properties::ITypeVisitor* i___Unity__Properties__ITypeVisitor() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeUtility_TypeConstructorVisitor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeUtility_TypeConstructorVisitor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeUtility_TypeConstructorVisitor(TypeUtility_TypeConstructorVisitor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeUtility_TypeConstructorVisitor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeUtility_TypeConstructorVisitor(TypeUtility_TypeConstructorVisitor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17484 };

  /// @brief Field TypeConstructor, offset: 0x10, size: 0x8, def value: None
  ::Unity::Properties::TypeUtility_ITypeConstructor* ___TypeConstructor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Properties::TypeUtility_TypeConstructorVisitor, ___TypeConstructor) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Properties::TypeUtility_TypeConstructorVisitor, 0x18>, "Size mismatch!");

} // namespace Unity::Properties
// Dependencies System.Object
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.TypeUtility/<>c
class CORDL_TYPE TypeUtility___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Unity::Properties::TypeUtility___c* __9;

  static inline ::Unity::Properties::TypeUtility___c* New_ctor();

  /// @brief Method <.cctor>b__11_0, addr 0x4915cb4, size 0x54, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* __cctor_b__11_0();

  /// @brief Method <.cctor>b__11_1, addr 0x4915d08, size 0x18, virtual false, abstract: false, final false
  inline void __cctor_b__11_1(::System::Text::StringBuilder* sb);

  /// @brief Method <.cctor>b__11_2, addr 0x4915d20, size 0x48, virtual false, abstract: false, final false
  inline ::StringW __cctor_b__11_2();

  /// @brief Method .ctor, addr 0x4915cac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Properties::TypeUtility___c* getStaticF___9();

  static inline void setStaticF___9(::Unity::Properties::TypeUtility___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeUtility___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeUtility___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeUtility___c(TypeUtility___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeUtility___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeUtility___c(TypeUtility___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17485 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::TypeUtility___c, 0x10>, "Size mismatch!");

} // namespace Unity::Properties
// Dependencies System.Object
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.TypeUtility
class CORDL_TYPE TypeUtility : public ::System::Object {
public:
  // Declarations
  template <typename T> using Cache_1 = ::Unity::Properties::TypeUtility_Cache_1<T>;

  using ITypeConstructor = ::Unity::Properties::TypeUtility_ITypeConstructor;

  template <typename T> using ITypeConstructor_1 = ::Unity::Properties::TypeUtility_ITypeConstructor_1<T>;

  using NonConstructable = ::Unity::Properties::TypeUtility_NonConstructable;

  using TypeConstructorVisitor = ::Unity::Properties::TypeUtility_TypeConstructorVisitor;

  template <typename T> using TypeConstructor_1 = ::Unity::Properties::TypeUtility_TypeConstructor_1<T>;

  using __c = ::Unity::Properties::TypeUtility___c;

  /// @brief Field s_Builders, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Builders, put = setStaticF_s_Builders)) ::UnityEngine::Pool::ObjectPool_1<::System::Text::StringBuilder*>* s_Builders;

  /// @brief Field s_CachedResolvedName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CachedResolvedName,
                      put = setStaticF_s_CachedResolvedName)) ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::StringW>* s_CachedResolvedName;

  /// @brief Field s_CreateTypeConstructor, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CreateTypeConstructor, put = setStaticF_s_CreateTypeConstructor)) ::System::Reflection::MethodInfo* s_CreateTypeConstructor;

  /// @brief Field s_TypeConstructors, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF_s_TypeConstructors,
      put = setStaticF_s_TypeConstructors)) ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::Unity::Properties::TypeUtility_ITypeConstructor*>* s_TypeConstructors;

  /// @brief Field syncedPoolObject, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_syncedPoolObject, put = setStaticF_syncedPoolObject)) ::System::Object* syncedPoolObject;

  /// @brief Method CanBeInstantiated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool CanBeInstantiated();

  /// @brief Method CanBeInstantiated, addr 0x4915898, size 0xcc, virtual false, abstract: false, final false
  static inline bool CanBeInstantiated(::System::Type* type);

  /// @brief Method CheckCanBeInstantiated, addr 0x4915acc, size 0x130, virtual false, abstract: false, final false
  static inline void CheckCanBeInstantiated(::Unity::Properties::TypeUtility_ITypeConstructor* constructor, ::System::Type* type);

  /// @brief Method CheckCanBeInstantiated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void CheckCanBeInstantiated(::Unity::Properties::TypeUtility_ITypeConstructor_1<T>* constructor);

  /// @brief Method CheckIsAssignableFrom, addr 0x4915964, size 0x168, virtual false, abstract: false, final false
  static inline void CheckIsAssignableFrom(::System::Type* type, ::System::Type* derivedType);

  /// @brief Method CreateTypeConstructor, addr 0x49152d4, size 0x278, virtual false, abstract: false, final false
  static inline ::Unity::Properties::TypeUtility_ITypeConstructor* CreateTypeConstructor(::System::Type* type);

  /// @brief Method CreateTypeConstructor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Properties::TypeUtility_ITypeConstructor_1<T>* CreateTypeConstructor();

  /// @brief Method GetRootType, addr 0x49151a0, size 0x134, virtual false, abstract: false, final false
  static inline ::System::Type* GetRootType(::System::Type* type);

  /// @brief Method GetTypeConstructor, addr 0x49157e0, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Properties::TypeUtility_ITypeConstructor* GetTypeConstructor(::System::Type* type);

  /// @brief Method GetTypeConstructor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Properties::TypeUtility_ITypeConstructor_1<T>* GetTypeConstructor();

  /// @brief Method GetTypeDisplayName, addr 0x49146e4, size 0x118, virtual false, abstract: false, final false
  static inline ::StringW GetTypeDisplayName(::System::Type* type);

  /// @brief Method GetTypeDisplayName, addr 0x49147fc, size 0x9a4, virtual false, abstract: false, final false
  static inline ::StringW GetTypeDisplayName(::System::Type* type, ::System::Collections::Generic::IReadOnlyList_1<::System::Type*>* args, ::ByRef<int32_t> argIndex);

  /// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Instantiate();

  /// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Instantiate(::System::Type* derivedType);

  /// @brief Method InstantiateArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TArray> static inline TArray InstantiateArray(int32_t count);

  /// @brief Method InstantiateArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TArray> static inline TArray InstantiateArray(::System::Type* derivedType, int32_t count);

  /// @brief Method SetExplicitInstantiationMethod, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void SetExplicitInstantiationMethod(::System::Func_1<T>* constructor);

  /// @brief Method TryInstantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool TryInstantiate(::System::Type* derivedType, ::ByRef<T> value);

  /// @brief Method TryInstantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool TryInstantiate(::ByRef<T> instance);

  /// @brief Method TryInstantiateArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TArray> static inline bool TryInstantiateArray(int32_t count, ::ByRef<TArray> instance);

  static inline ::UnityEngine::Pool::ObjectPool_1<::System::Text::StringBuilder*>* getStaticF_s_Builders();

  static inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::StringW>* getStaticF_s_CachedResolvedName();

  static inline ::System::Reflection::MethodInfo* getStaticF_s_CreateTypeConstructor();

  static inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::Unity::Properties::TypeUtility_ITypeConstructor*>* getStaticF_s_TypeConstructors();

  static inline ::System::Object* getStaticF_syncedPoolObject();

  static inline void setStaticF_s_Builders(::UnityEngine::Pool::ObjectPool_1<::System::Text::StringBuilder*>* value);

  static inline void setStaticF_s_CachedResolvedName(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::StringW>* value);

  static inline void setStaticF_s_CreateTypeConstructor(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_s_TypeConstructors(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::Unity::Properties::TypeUtility_ITypeConstructor*>* value);

  static inline void setStaticF_syncedPoolObject(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeUtility(TypeUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeUtility(TypeUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17486 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::TypeUtility, 0x10>, "Size mismatch!");

} // namespace Unity::Properties
NEED_NO_BOX(::Unity::Properties::TypeUtility);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::TypeUtility*, "Unity.Properties", "TypeUtility");
NEED_NO_BOX(::Unity::Properties::TypeUtility_ITypeConstructor);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::TypeUtility_ITypeConstructor*, "Unity.Properties", "TypeUtility/ITypeConstructor");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::TypeUtility_ITypeConstructor_1, "Unity.Properties", "TypeUtility/ITypeConstructor`1");
NEED_NO_BOX(::Unity::Properties::TypeUtility_NonConstructable);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::TypeUtility_NonConstructable*, "Unity.Properties", "TypeUtility/NonConstructable");
NEED_NO_BOX(::Unity::Properties::TypeUtility_TypeConstructorVisitor);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::TypeUtility_TypeConstructorVisitor*, "Unity.Properties", "TypeUtility/TypeConstructorVisitor");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::TypeUtility_TypeConstructor_1, "Unity.Properties", "TypeUtility/TypeConstructor`1");
NEED_NO_BOX(::Unity::Properties::TypeUtility___c);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::TypeUtility___c*, "Unity.Properties", "TypeUtility/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Properties::TypeUtility_Cache_1, "Unity.Properties", "TypeUtility/Cache`1");
