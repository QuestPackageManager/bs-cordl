#pragma once
// IWYU pragma private; include "Unity/Properties/TypeUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
class ITypeVisitor;
}
namespace Unity::Properties {
template <typename T> struct __TypeUtility__Cache_1;
}
namespace Unity::Properties {
template <typename T> class __TypeUtility__ITypeConstructor_1;
}
namespace Unity::Properties {
class __TypeUtility__ITypeConstructor;
}
namespace Unity::Properties {
class __TypeUtility__NonConstructable;
}
namespace Unity::Properties {
class __TypeUtility__TypeConstructorVisitor;
}
namespace Unity::Properties {
template <typename T> class __TypeUtility__TypeConstructor_1;
}
namespace Unity::Properties {
class __TypeUtility____c;
}
namespace UnityEngine::Pool {
template <typename T> class ObjectPool_1;
}
// Forward declare root types
namespace Unity::Properties {
class TypeUtility;
}
namespace Unity::Properties {
class __TypeUtility__ITypeConstructor;
}
namespace Unity::Properties {
template <typename T> class __TypeUtility__ITypeConstructor_1;
}
namespace Unity::Properties {
class __TypeUtility__NonConstructable;
}
namespace Unity::Properties {
class __TypeUtility__TypeConstructorVisitor;
}
namespace Unity::Properties {
template <typename T> class __TypeUtility__TypeConstructor_1;
}
namespace Unity::Properties {
class __TypeUtility____c;
}
namespace Unity::Properties {
template <typename T> struct __TypeUtility__Cache_1;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::TypeUtility);
MARK_REF_PTR_T(::Unity::Properties::__TypeUtility__ITypeConstructor);
MARK_GEN_REF_PTR_T(::Unity::Properties::__TypeUtility__ITypeConstructor_1);
MARK_REF_PTR_T(::Unity::Properties::__TypeUtility__NonConstructable);
MARK_REF_PTR_T(::Unity::Properties::__TypeUtility__TypeConstructorVisitor);
MARK_GEN_REF_PTR_T(::Unity::Properties::__TypeUtility__TypeConstructor_1);
MARK_REF_PTR_T(::Unity::Properties::__TypeUtility____c);
MARK_GEN_VAL_T(::Unity::Properties::__TypeUtility__Cache_1);
// Type: ::ITypeConstructor
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties {
// Is value type: false
// CS Name: ::TypeUtility::ITypeConstructor*
class CORDL_TYPE __TypeUtility__ITypeConstructor {
public:
  // Declarations
  __declspec(property(get = get_CanBeInstantiated)) bool CanBeInstantiated;

  /// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* Instantiate();

  /// @brief Method get_CanBeInstantiated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_CanBeInstantiated();

  // Ctor Parameters [CppParam { name: "", ty: "__TypeUtility__ITypeConstructor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeUtility__ITypeConstructor(__TypeUtility__ITypeConstructor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeUtility__ITypeConstructor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeUtility__ITypeConstructor(__TypeUtility__ITypeConstructor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17431 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
// Type: ::ITypeConstructor`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::TypeUtility::ITypeConstructor`1<T>*
class CORDL_TYPE __TypeUtility__ITypeConstructor_1 {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Properties::__TypeUtility__ITypeConstructor"
  constexpr operator ::Unity::Properties::__TypeUtility__ITypeConstructor*() noexcept;

  /// @brief Method Instantiate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T Instantiate();

  /// @brief Method SetExplicitConstructor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetExplicitConstructor(::System::Func_1<T>* constructor);

  /// @brief Convert to "::Unity::Properties::__TypeUtility__ITypeConstructor"
  constexpr ::Unity::Properties::__TypeUtility__ITypeConstructor* i___Unity__Properties____TypeUtility__ITypeConstructor() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeUtility__ITypeConstructor_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeUtility__ITypeConstructor_1(__TypeUtility__ITypeConstructor_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeUtility__ITypeConstructor_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeUtility__ITypeConstructor_1(__TypeUtility__ITypeConstructor_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17432 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
// Type: ::TypeConstructor`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::TypeUtility::TypeConstructor`1<T>*
class CORDL_TYPE __TypeUtility__TypeConstructor_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated)) bool Unity_Properties_TypeUtility_ITypeConstructor_CanBeInstantiated;

  /// @brief Field m_ExplicitConstructor, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ExplicitConstructor, put = __cordl_internal_set_m_ExplicitConstructor)) ::System::Func_1<T>* m_ExplicitConstructor;

  /// @brief Field m_ImplicitConstructor, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ImplicitConstructor, put = __cordl_internal_set_m_ImplicitConstructor)) ::System::Func_1<T>* m_ImplicitConstructor;

  /// @brief Field m_OverrideConstructor, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OverrideConstructor, put = __cordl_internal_set_m_OverrideConstructor)) ::Unity::Properties::IConstructor_1<T>* m_OverrideConstructor;

  /// @brief Convert operator to "::Unity::Properties::__TypeUtility__ITypeConstructor"
  constexpr operator ::Unity::Properties::__TypeUtility__ITypeConstructor*() noexcept;

  /// @brief Convert operator to "::Unity::Properties::__TypeUtility__ITypeConstructor_1<T>"
  constexpr operator ::Unity::Properties::__TypeUtility__ITypeConstructor_1<T>*() noexcept;

  /// @brief Method CreateClassInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T CreateClassInstance();

  /// @brief Method CreateScriptableObjectInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T CreateScriptableObjectInstance();

  /// @brief Method CreateValueTypeInstance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T CreateValueTypeInstance();

  static inline ::Unity::Properties::__TypeUtility__TypeConstructor_1<T>* New_ctor();

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

  constexpr ::System::Func_1<T>*& __cordl_internal_get_m_ExplicitConstructor();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> const& __cordl_internal_get_m_ExplicitConstructor() const;

  constexpr ::System::Func_1<T>*& __cordl_internal_get_m_ImplicitConstructor();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> const& __cordl_internal_get_m_ImplicitConstructor() const;

  constexpr ::Unity::Properties::IConstructor_1<T>*& __cordl_internal_get_m_OverrideConstructor();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Properties::IConstructor_1<T>*> const& __cordl_internal_get_m_OverrideConstructor() const;

  constexpr void __cordl_internal_set_m_ExplicitConstructor(::System::Func_1<T>* value);

  constexpr void __cordl_internal_set_m_ImplicitConstructor(::System::Func_1<T>* value);

  constexpr void __cordl_internal_set_m_OverrideConstructor(::Unity::Properties::IConstructor_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Unity::Properties::__TypeUtility__ITypeConstructor"
  constexpr ::Unity::Properties::__TypeUtility__ITypeConstructor* i___Unity__Properties____TypeUtility__ITypeConstructor() noexcept;

  /// @brief Convert to "::Unity::Properties::__TypeUtility__ITypeConstructor_1<T>"
  constexpr ::Unity::Properties::__TypeUtility__ITypeConstructor_1<T>* i___Unity__Properties____TypeUtility__ITypeConstructor_1_T_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeUtility__TypeConstructor_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TypeUtility__TypeConstructor_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeUtility__TypeConstructor_1(__TypeUtility__TypeConstructor_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeUtility__TypeConstructor_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeUtility__TypeConstructor_1(__TypeUtility__TypeConstructor_1 const&) = delete;

  /// @brief Field m_ExplicitConstructor, offset: 0x10, size: 0x8, def value: None
  ::System::Func_1<T>* ___m_ExplicitConstructor;

  /// @brief Field m_ImplicitConstructor, offset: 0x18, size: 0x8, def value: None
  ::System::Func_1<T>* ___m_ImplicitConstructor;

  /// @brief Field m_OverrideConstructor, offset: 0x20, size: 0x8, def value: None
  ::Unity::Properties::IConstructor_1<T>* ___m_OverrideConstructor;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17433 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
// Type: ::NonConstructable
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties {
// Is value type: false
// CS Name: ::TypeUtility::NonConstructable*
class CORDL_TYPE __TypeUtility__NonConstructable : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated)) bool Unity_Properties_TypeUtility_ITypeConstructor_CanBeInstantiated;

  /// @brief Convert operator to "::Unity::Properties::__TypeUtility__ITypeConstructor"
  constexpr operator ::Unity::Properties::__TypeUtility__ITypeConstructor*() noexcept;

  /// @brief Method Instantiate, addr 0x48ae310, size 0x4c, virtual true, abstract: false, final true
  inline ::System::Object* Instantiate();

  static inline ::Unity::Properties::__TypeUtility__NonConstructable* New_ctor();

  /// @brief Method Unity.Properties.TypeUtility.ITypeConstructor.get_CanBeInstantiated, addr 0x48ae308, size 0x8, virtual true, abstract: false, final true
  inline bool Unity_Properties_TypeUtility_ITypeConstructor_get_CanBeInstantiated();

  /// @brief Method .ctor, addr 0x48adee4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Unity::Properties::__TypeUtility__ITypeConstructor"
  constexpr ::Unity::Properties::__TypeUtility__ITypeConstructor* i___Unity__Properties____TypeUtility__ITypeConstructor() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeUtility__NonConstructable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TypeUtility__NonConstructable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeUtility__NonConstructable(__TypeUtility__NonConstructable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeUtility__NonConstructable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeUtility__NonConstructable(__TypeUtility__NonConstructable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17434 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::__TypeUtility__NonConstructable, 0x10>, "Size mismatch!");

} // namespace Unity::Properties
// Type: ::Cache`1
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 16, minimum_alignment: 1, packing: None, specified_packing: Some(0) }
namespace Unity::Properties {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::TypeUtility::Cache`1<T>
#pragma pack(push, 0)
struct CORDL_TYPE __TypeUtility__Cache_1 {
public:
  // Declarations
  /// @brief Field TypeConstructor, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TypeConstructor, put = setStaticF_TypeConstructor)) ::Unity::Properties::__TypeUtility__ITypeConstructor_1<T>* TypeConstructor;

  static inline ::Unity::Properties::__TypeUtility__ITypeConstructor_1<T>* getStaticF_TypeConstructor();

  static inline void setStaticF_TypeConstructor(::Unity::Properties::__TypeUtility__ITypeConstructor_1<T>* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeUtility__Cache_1();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17435 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace Unity::Properties
// Type: ::TypeConstructorVisitor
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties {
// Is value type: false
// CS Name: ::TypeUtility::TypeConstructorVisitor*
class CORDL_TYPE __TypeUtility__TypeConstructorVisitor : public ::System::Object {
public:
  // Declarations
  /// @brief Field TypeConstructor, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_TypeConstructor, put = __cordl_internal_set_TypeConstructor)) ::Unity::Properties::__TypeUtility__ITypeConstructor* TypeConstructor;

  /// @brief Convert operator to "::Unity::Properties::ITypeVisitor"
  constexpr operator ::Unity::Properties::ITypeVisitor*() noexcept;

  static inline ::Unity::Properties::__TypeUtility__TypeConstructorVisitor* New_ctor();

  /// @brief Method Visit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename TContainer> inline void Visit();

  constexpr ::Unity::Properties::__TypeUtility__ITypeConstructor*& __cordl_internal_get_TypeConstructor();

  constexpr ::cordl_internals::to_const_pointer<::Unity::Properties::__TypeUtility__ITypeConstructor*> const& __cordl_internal_get_TypeConstructor() const;

  constexpr void __cordl_internal_set_TypeConstructor(::Unity::Properties::__TypeUtility__ITypeConstructor* value);

  /// @brief Method .ctor, addr 0x48adedc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Unity::Properties::ITypeVisitor"
  constexpr ::Unity::Properties::ITypeVisitor* i___Unity__Properties__ITypeVisitor() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeUtility__TypeConstructorVisitor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TypeUtility__TypeConstructorVisitor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeUtility__TypeConstructorVisitor(__TypeUtility__TypeConstructorVisitor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeUtility__TypeConstructorVisitor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeUtility__TypeConstructorVisitor(__TypeUtility__TypeConstructorVisitor const&) = delete;

  /// @brief Field TypeConstructor, offset: 0x10, size: 0x8, def value: None
  ::Unity::Properties::__TypeUtility__ITypeConstructor* ___TypeConstructor;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17436 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::__TypeUtility__TypeConstructorVisitor, 0x18>, "Size mismatch!");

static_assert(offsetof(::Unity::Properties::__TypeUtility__TypeConstructorVisitor, ___TypeConstructor) == 0x10, "Offset mismatch!");

} // namespace Unity::Properties
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties {
// Is value type: false
// CS Name: ::TypeUtility::<>c*
class CORDL_TYPE __TypeUtility____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Unity::Properties::__TypeUtility____c* __9;

  static inline ::Unity::Properties::__TypeUtility____c* New_ctor();

  /// @brief Method <.cctor>b__11_0, addr 0x48ae3c0, size 0x54, virtual false, abstract: false, final false
  inline ::System::Text::StringBuilder* __cctor_b__11_0();

  /// @brief Method <.cctor>b__11_1, addr 0x48ae414, size 0x18, virtual false, abstract: false, final false
  inline void __cctor_b__11_1(::System::Text::StringBuilder* sb);

  /// @brief Method <.cctor>b__11_2, addr 0x48ae42c, size 0x48, virtual false, abstract: false, final false
  inline ::StringW __cctor_b__11_2();

  /// @brief Method .ctor, addr 0x48ae3b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Properties::__TypeUtility____c* getStaticF___9();

  static inline void setStaticF___9(::Unity::Properties::__TypeUtility____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeUtility____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TypeUtility____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeUtility____c(__TypeUtility____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeUtility____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeUtility____c(__TypeUtility____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17437 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::__TypeUtility____c, 0x10>, "Size mismatch!");

} // namespace Unity::Properties
// Type: Unity.Properties::TypeUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties {
// Is value type: false
// CS Name: ::Unity.Properties::TypeUtility*
class CORDL_TYPE TypeUtility : public ::System::Object {
public:
  // Declarations
  template <typename T> using Cache_1 = ::Unity::Properties::__TypeUtility__Cache_1<T>;

  using ITypeConstructor = ::Unity::Properties::__TypeUtility__ITypeConstructor;

  template <typename T> using ITypeConstructor_1 = ::Unity::Properties::__TypeUtility__ITypeConstructor_1<T>;

  using NonConstructable = ::Unity::Properties::__TypeUtility__NonConstructable;

  using TypeConstructorVisitor = ::Unity::Properties::__TypeUtility__TypeConstructorVisitor;

  template <typename T> using TypeConstructor_1 = ::Unity::Properties::__TypeUtility__TypeConstructor_1<T>;

  using __c = ::Unity::Properties::__TypeUtility____c;

  /// @brief Field s_Builders, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Builders, put = setStaticF_s_Builders)) ::UnityEngine::Pool::ObjectPool_1<::System::Text::StringBuilder*>* s_Builders;

  /// @brief Field s_CachedResolvedName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_CachedResolvedName,
                             put = setStaticF_s_CachedResolvedName)) ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::StringW>* s_CachedResolvedName;

  /// @brief Field s_CreateTypeConstructor, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_CreateTypeConstructor, put = setStaticF_s_CreateTypeConstructor)) ::System::Reflection::MethodInfo* s_CreateTypeConstructor;

  /// @brief Field s_TypeConstructors, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF_s_TypeConstructors,
      put = setStaticF_s_TypeConstructors)) ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::Unity::Properties::__TypeUtility__ITypeConstructor*>* s_TypeConstructors;

  /// @brief Field syncedPoolObject, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_syncedPoolObject, put = setStaticF_syncedPoolObject)) ::System::Object* syncedPoolObject;

  /// @brief Method CanBeInstantiated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool CanBeInstantiated();

  /// @brief Method CanBeInstantiated, addr 0x48adfa4, size 0xcc, virtual false, abstract: false, final false
  static inline bool CanBeInstantiated(::System::Type* type);

  /// @brief Method CheckCanBeInstantiated, addr 0x48ae1d8, size 0x130, virtual false, abstract: false, final false
  static inline void CheckCanBeInstantiated(::Unity::Properties::__TypeUtility__ITypeConstructor* constructor, ::System::Type* type);

  /// @brief Method CheckCanBeInstantiated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void CheckCanBeInstantiated(::Unity::Properties::__TypeUtility__ITypeConstructor_1<T>* constructor);

  /// @brief Method CheckIsAssignableFrom, addr 0x48ae070, size 0x168, virtual false, abstract: false, final false
  static inline void CheckIsAssignableFrom(::System::Type* type, ::System::Type* derivedType);

  /// @brief Method CreateTypeConstructor, addr 0x48ad9e0, size 0x278, virtual false, abstract: false, final false
  static inline ::Unity::Properties::__TypeUtility__ITypeConstructor* CreateTypeConstructor(::System::Type* type);

  /// @brief Method CreateTypeConstructor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Properties::__TypeUtility__ITypeConstructor_1<T>* CreateTypeConstructor();

  /// @brief Method GetRootType, addr 0x48ad8ac, size 0x134, virtual false, abstract: false, final false
  static inline ::System::Type* GetRootType(::System::Type* type);

  /// @brief Method GetTypeConstructor, addr 0x48adeec, size 0xb8, virtual false, abstract: false, final false
  static inline ::Unity::Properties::__TypeUtility__ITypeConstructor* GetTypeConstructor(::System::Type* type);

  /// @brief Method GetTypeConstructor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Properties::__TypeUtility__ITypeConstructor_1<T>* GetTypeConstructor();

  /// @brief Method GetTypeDisplayName, addr 0x48acdf0, size 0x118, virtual false, abstract: false, final false
  static inline ::StringW GetTypeDisplayName(::System::Type* type);

  /// @brief Method GetTypeDisplayName, addr 0x48acf08, size 0x9a4, virtual false, abstract: false, final false
  static inline ::StringW GetTypeDisplayName(::System::Type* type, ::System::Collections::Generic::IReadOnlyList_1<::System::Type*>* args, ByRef<int32_t> argIndex);

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
  template <typename T> static inline bool TryInstantiate(::System::Type* derivedType, ByRef<T> value);

  /// @brief Method TryInstantiate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool TryInstantiate(ByRef<T> instance);

  /// @brief Method TryInstantiateArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TArray> static inline bool TryInstantiateArray(int32_t count, ByRef<TArray> instance);

  static inline ::UnityEngine::Pool::ObjectPool_1<::System::Text::StringBuilder*>* getStaticF_s_Builders();

  static inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::StringW>* getStaticF_s_CachedResolvedName();

  static inline ::System::Reflection::MethodInfo* getStaticF_s_CreateTypeConstructor();

  static inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::Unity::Properties::__TypeUtility__ITypeConstructor*>* getStaticF_s_TypeConstructors();

  static inline ::System::Object* getStaticF_syncedPoolObject();

  static inline void setStaticF_s_Builders(::UnityEngine::Pool::ObjectPool_1<::System::Text::StringBuilder*>* value);

  static inline void setStaticF_s_CachedResolvedName(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::StringW>* value);

  static inline void setStaticF_s_CreateTypeConstructor(::System::Reflection::MethodInfo* value);

  static inline void setStaticF_s_TypeConstructors(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::Unity::Properties::__TypeUtility__ITypeConstructor*>* value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17438 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::TypeUtility, 0x10>, "Size mismatch!");

} // namespace Unity::Properties
NEED_NO_BOX(::Unity::Properties::TypeUtility);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::TypeUtility*, "Unity.Properties", "TypeUtility");
NEED_NO_BOX(::Unity::Properties::__TypeUtility__ITypeConstructor);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::__TypeUtility__ITypeConstructor*, "Unity.Properties", "TypeUtility/ITypeConstructor");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::__TypeUtility__ITypeConstructor_1, "Unity.Properties", "TypeUtility/ITypeConstructor`1");
NEED_NO_BOX(::Unity::Properties::__TypeUtility__NonConstructable);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::__TypeUtility__NonConstructable*, "Unity.Properties", "TypeUtility/NonConstructable");
NEED_NO_BOX(::Unity::Properties::__TypeUtility__TypeConstructorVisitor);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::__TypeUtility__TypeConstructorVisitor*, "Unity.Properties", "TypeUtility/TypeConstructorVisitor");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::__TypeUtility__TypeConstructor_1, "Unity.Properties", "TypeUtility/TypeConstructor`1");
NEED_NO_BOX(::Unity::Properties::__TypeUtility____c);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::__TypeUtility____c*, "Unity.Properties", "TypeUtility/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Properties::__TypeUtility__Cache_1, "Unity.Properties", "TypeUtility/Cache`1");
