#pragma once
// IWYU pragma private; include "System/Data/TypeLimiter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TypeLimiter)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Data {
class DataColumn;
}
namespace System::Data {
class DataSet;
}
namespace System::Data {
class DataTable;
}
namespace System::Data {
class Scope_TypeLimiter___c;
}
namespace System::Data {
class TypeLimiter_Scope;
}
namespace System::Data {
class TypeLimiter___c;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data {
class Scope_TypeLimiter___c;
}
namespace System::Data {
class TypeLimiter;
}
namespace System::Data {
class TypeLimiter_Scope;
}
namespace System::Data {
class TypeLimiter___c;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::Scope_TypeLimiter___c);
MARK_REF_PTR_T(::System::Data::TypeLimiter);
MARK_REF_PTR_T(::System::Data::TypeLimiter_Scope);
MARK_REF_PTR_T(::System::Data::TypeLimiter___c);
// Dependencies System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.TypeLimiter/Scope/<>c
class CORDL_TYPE Scope_TypeLimiter___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::Data::Scope_TypeLimiter___c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::System::Func_2<::System::Type*, bool>* __9__3_0;

  static inline ::System::Data::Scope_TypeLimiter___c* New_ctor();

  /// @brief Method <.ctor>b__3_0, addr 0x4153004, size 0x5c, virtual false, abstract: false, final false
  inline bool __ctor_b__3_0(::System::Type* type);

  /// @brief Method .ctor, addr 0x4152ffc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Data::Scope_TypeLimiter___c* getStaticF___9();

  static inline ::System::Func_2<::System::Type*, bool>* getStaticF___9__3_0();

  static inline void setStaticF___9(::System::Data::Scope_TypeLimiter___c* value);

  static inline void setStaticF___9__3_0(::System::Func_2<::System::Type*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Scope_TypeLimiter___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Scope_TypeLimiter___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Scope_TypeLimiter___c(Scope_TypeLimiter___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Scope_TypeLimiter___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Scope_TypeLimiter___c(Scope_TypeLimiter___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11355 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::Scope_TypeLimiter___c, 0x10>, "Size mismatch!");

} // namespace System::Data
// Dependencies System.IDisposable, System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.TypeLimiter/Scope
class CORDL_TYPE TypeLimiter_Scope : public ::System::Object {
public:
  // Declarations
  using __c = ::System::Data::Scope_TypeLimiter___c;

  /// @brief Field m_allowedTypes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_allowedTypes, put = __cordl_internal_set_m_allowedTypes)) ::System::Collections::Generic::HashSet_1<::System::Type*>* m_allowedTypes;

  /// @brief Field m_previousScope, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_previousScope, put = __cordl_internal_set_m_previousScope)) ::System::Data::TypeLimiter_Scope* m_previousScope;

  /// @brief Field s_allowedTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_allowedTypes, put = setStaticF_s_allowedTypes)) ::System::Collections::Generic::HashSet_1<::System::Type*>* s_allowedTypes;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x41523e8, size 0xcc, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method IsAllowedType, addr 0x4151c50, size 0x198, virtual false, abstract: false, final false
  inline bool IsAllowedType(::System::Type* type);

  /// @brief Method IsTypeUnconditionallyAllowed, addr 0x41524b4, size 0x1c4, virtual false, abstract: false, final false
  static inline bool IsTypeUnconditionallyAllowed(::System::Type* type);

  static inline ::System::Data::TypeLimiter_Scope* New_ctor(::System::Data::TypeLimiter_Scope* previousScope, ::System::Collections::Generic::IEnumerable_1<::System::Type*>* allowedTypes);

  constexpr ::System::Collections::Generic::HashSet_1<::System::Type*>* const& __cordl_internal_get_m_allowedTypes() const;

  constexpr ::System::Collections::Generic::HashSet_1<::System::Type*>*& __cordl_internal_get_m_allowedTypes();

  constexpr ::System::Data::TypeLimiter_Scope* const& __cordl_internal_get_m_previousScope() const;

  constexpr ::System::Data::TypeLimiter_Scope*& __cordl_internal_get_m_previousScope();

  constexpr void __cordl_internal_set_m_allowedTypes(::System::Collections::Generic::HashSet_1<::System::Type*>* value);

  constexpr void __cordl_internal_set_m_previousScope(::System::Data::TypeLimiter_Scope* value);

  /// @brief Method .ctor, addr 0x4152034, size 0x168, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::TypeLimiter_Scope* previousScope, ::System::Collections::Generic::IEnumerable_1<::System::Type*>* allowedTypes);

  static inline ::System::Collections::Generic::HashSet_1<::System::Type*>* getStaticF_s_allowedTypes();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_s_allowedTypes(::System::Collections::Generic::HashSet_1<::System::Type*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeLimiter_Scope();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeLimiter_Scope", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeLimiter_Scope(TypeLimiter_Scope&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeLimiter_Scope", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeLimiter_Scope(TypeLimiter_Scope const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11356 };

  /// @brief Field m_allowedTypes, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::System::Type*>* ___m_allowedTypes;

  /// @brief Field m_previousScope, offset: 0x18, size: 0x8, def value: None
  ::System::Data::TypeLimiter_Scope* ___m_previousScope;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::TypeLimiter_Scope, ___m_allowedTypes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Data::TypeLimiter_Scope, ___m_previousScope) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::TypeLimiter_Scope, 0x20>, "Size mismatch!");

} // namespace System::Data
// Dependencies System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.TypeLimiter/<>c
class CORDL_TYPE TypeLimiter___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::Data::TypeLimiter___c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_0, put = setStaticF___9__10_0)) ::System::Func_2<::System::Data::DataColumn*, ::System::Type*>* __9__10_0;

  /// @brief Field <>9__11_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__11_0, put = setStaticF___9__11_0)) ::System::Func_2<::System::Data::DataTable*, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*>* __9__11_0;

  static inline ::System::Data::TypeLimiter___c* New_ctor();

  /// @brief Method <GetPreviouslyDeclaredDataTypes>b__10_0, addr 0x41530c4, size 0x18, virtual false, abstract: false, final false
  inline ::System::Type* _GetPreviouslyDeclaredDataTypes_b__10_0(::System::Data::DataColumn* column);

  /// @brief Method <GetPreviouslyDeclaredDataTypes>b__11_0, addr 0x41530dc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* _GetPreviouslyDeclaredDataTypes_b__11_0(::System::Data::DataTable* table);

  /// @brief Method .ctor, addr 0x41530bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Data::TypeLimiter___c* getStaticF___9();

  static inline ::System::Func_2<::System::Data::DataColumn*, ::System::Type*>* getStaticF___9__10_0();

  static inline ::System::Func_2<::System::Data::DataTable*, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*>* getStaticF___9__11_0();

  static inline void setStaticF___9(::System::Data::TypeLimiter___c* value);

  static inline void setStaticF___9__10_0(::System::Func_2<::System::Data::DataColumn*, ::System::Type*>* value);

  static inline void setStaticF___9__11_0(::System::Func_2<::System::Data::DataTable*, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeLimiter___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeLimiter___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeLimiter___c(TypeLimiter___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeLimiter___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeLimiter___c(TypeLimiter___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11357 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::TypeLimiter___c, 0x10>, "Size mismatch!");

} // namespace System::Data
// Dependencies System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.TypeLimiter
class CORDL_TYPE TypeLimiter : public ::System::Object {
public:
  // Declarations
  using Scope = ::System::Data::TypeLimiter_Scope;

  using __c = ::System::Data::TypeLimiter___c;

  /// @brief Field m_instanceScope, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_instanceScope, put = __cordl_internal_set_m_instanceScope)) ::System::Data::TypeLimiter_Scope* m_instanceScope;

  /// @brief Field s_activeScope, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_activeScope, put = setStaticF_s_activeScope)) ::System::Data::TypeLimiter_Scope* s_activeScope;

  /// @brief Method Capture, addr 0x4151b48, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Data::TypeLimiter* Capture();

  /// @brief Method EnsureTypeIsAllowed, addr 0x4151bb8, size 0x98, virtual false, abstract: false, final false
  static inline void EnsureTypeIsAllowed(::System::Type* type, ::System::Data::TypeLimiter* capturedLimiter);

  /// @brief Method EnterRestrictedScope, addr 0x4151de8, size 0xb8, virtual false, abstract: false, final false
  static inline ::System::IDisposable* EnterRestrictedScope(::System::Data::DataSet* dataSet);

  /// @brief Method EnterRestrictedScope, addr 0x415219c, size 0xb8, virtual false, abstract: false, final false
  static inline ::System::IDisposable* EnterRestrictedScope(::System::Data::DataTable* dataTable);

  /// @brief Method GetPreviouslyDeclaredDataTypes, addr 0x4151ea0, size 0x194, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetPreviouslyDeclaredDataTypes(::System::Data::DataSet* dataSet);

  /// @brief Method GetPreviouslyDeclaredDataTypes, addr 0x4152254, size 0x194, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetPreviouslyDeclaredDataTypes(::System::Data::DataTable* dataTable);

  static inline ::System::Data::TypeLimiter* New_ctor(::System::Data::TypeLimiter_Scope* scope);

  constexpr ::System::Data::TypeLimiter_Scope* const& __cordl_internal_get_m_instanceScope() const;

  constexpr ::System::Data::TypeLimiter_Scope*& __cordl_internal_get_m_instanceScope();

  constexpr void __cordl_internal_set_m_instanceScope(::System::Data::TypeLimiter_Scope* value);

  /// @brief Method .ctor, addr 0x4151aa8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Data::TypeLimiter_Scope* scope);

  static inline ::System::Data::TypeLimiter_Scope* getStaticF_s_activeScope();

  /// @brief Method get_IsTypeLimitingDisabled, addr 0x4151ad0, size 0x78, virtual false, abstract: false, final false
  static inline bool get_IsTypeLimitingDisabled();

  static inline void setStaticF_s_activeScope(::System::Data::TypeLimiter_Scope* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeLimiter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeLimiter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeLimiter(TypeLimiter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeLimiter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeLimiter(TypeLimiter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11358 };

  /// @brief Field m_instanceScope, offset: 0x10, size: 0x8, def value: None
  ::System::Data::TypeLimiter_Scope* ___m_instanceScope;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::TypeLimiter, ___m_instanceScope) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::TypeLimiter, 0x18>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::Scope_TypeLimiter___c);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Scope_TypeLimiter___c*, "System.Data", "TypeLimiter/Scope/<>c");
NEED_NO_BOX(::System::Data::TypeLimiter);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::TypeLimiter*, "System.Data", "TypeLimiter");
NEED_NO_BOX(::System::Data::TypeLimiter_Scope);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::TypeLimiter_Scope*, "System.Data", "TypeLimiter/Scope");
NEED_NO_BOX(::System::Data::TypeLimiter___c);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::TypeLimiter___c*, "System.Data", "TypeLimiter/<>c");
