#pragma once
// IWYU pragma private; include "ModestTree/TypeStringFormatter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TypeStringFormatter)
namespace ModestTree {
class TypeStringFormatter___c;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace ModestTree {
class TypeStringFormatter;
}
namespace ModestTree {
class TypeStringFormatter___c;
}
// Write type traits
MARK_REF_PTR_T(::ModestTree::TypeStringFormatter);
MARK_REF_PTR_T(::ModestTree::TypeStringFormatter___c);
// Dependencies System.Object
namespace ModestTree {
// Is value type: false
// CS Name: ModestTree.TypeStringFormatter/<>c
class CORDL_TYPE TypeStringFormatter___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::ModestTree::TypeStringFormatter___c* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0)) ::System::Func_2<::System::Type*, ::StringW>* __9__2_0;

  static inline ::ModestTree::TypeStringFormatter___c* New_ctor();

  /// @brief Method <PrettyNameInternal>b__2_0, addr 0x6c763f4, size 0x58, virtual false, abstract: false, final false
  inline ::StringW _PrettyNameInternal_b__2_0(::System::Type* t);

  /// @brief Method .ctor, addr 0x6c763f0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ModestTree::TypeStringFormatter___c* getStaticF___9();

  static inline ::System::Func_2<::System::Type*, ::StringW>* getStaticF___9__2_0();

  static inline void setStaticF___9(::ModestTree::TypeStringFormatter___c* value);

  static inline void setStaticF___9__2_0(::System::Func_2<::System::Type*, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeStringFormatter___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeStringFormatter___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeStringFormatter___c(TypeStringFormatter___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeStringFormatter___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeStringFormatter___c(TypeStringFormatter___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13948 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::TypeStringFormatter___c, 0x10>, "Size mismatch!");

} // namespace ModestTree
// Dependencies System.Object
namespace ModestTree {
// Is value type: false
// CS Name: ModestTree.TypeStringFormatter
class CORDL_TYPE TypeStringFormatter : public ::System::Object {
public:
  // Declarations
  using __c = ::ModestTree::TypeStringFormatter___c;

  /// @brief Field _prettyNameCache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__prettyNameCache, put = setStaticF__prettyNameCache)) ::System::Collections::Generic::Dictionary_2<::System::Type*, ::StringW>* _prettyNameCache;

  /// @brief Method GetCSharpTypeName, addr 0x6c75f5c, size 0x38c, virtual false, abstract: false, final false
  static inline ::StringW GetCSharpTypeName(::StringW typeName);

  /// @brief Method PrettyName, addr 0x6c74118, size 0x114, virtual false, abstract: false, final false
  static inline ::StringW PrettyName(::System::Type* type);

  /// @brief Method PrettyNameInternal, addr 0x6c75ac0, size 0x49c, virtual false, abstract: false, final false
  static inline ::StringW PrettyNameInternal(::System::Type* type);

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::StringW>* getStaticF__prettyNameCache();

  static inline void setStaticF__prettyNameCache(::System::Collections::Generic::Dictionary_2<::System::Type*, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeStringFormatter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeStringFormatter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeStringFormatter(TypeStringFormatter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeStringFormatter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeStringFormatter(TypeStringFormatter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13949 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::TypeStringFormatter, 0x10>, "Size mismatch!");

} // namespace ModestTree
NEED_NO_BOX(::ModestTree::TypeStringFormatter);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::TypeStringFormatter*, "ModestTree", "TypeStringFormatter");
NEED_NO_BOX(::ModestTree::TypeStringFormatter___c);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::TypeStringFormatter___c*, "ModestTree", "TypeStringFormatter/<>c");
