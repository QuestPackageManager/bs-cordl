#pragma once
// IWYU pragma private; include "ModestTree/TypeStringFormatter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TypeStringFormatter)
namespace ModestTree {
class __TypeStringFormatter____c;
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
class __TypeStringFormatter____c;
}
// Write type traits
MARK_REF_PTR_T(::ModestTree::TypeStringFormatter);
MARK_REF_PTR_T(::ModestTree::__TypeStringFormatter____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ModestTree {
// Is value type: false
// CS Name: ::TypeStringFormatter::<>c*
class CORDL_TYPE __TypeStringFormatter____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::ModestTree::__TypeStringFormatter____c* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0))::System::Func_2<::System::Type*, ::StringW>* __9__2_0;

  static inline ::ModestTree::__TypeStringFormatter____c* New_ctor();

  /// @brief Method <PrettyNameInternal>b__2_0, addr 0x36131a0, size 0x54, virtual false, abstract: false, final false
  inline ::StringW _PrettyNameInternal_b__2_0(::System::Type* t);

  /// @brief Method .ctor, addr 0x3613198, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ModestTree::__TypeStringFormatter____c* getStaticF___9();

  static inline ::System::Func_2<::System::Type*, ::StringW>* getStaticF___9__2_0();

  static inline void setStaticF___9(::ModestTree::__TypeStringFormatter____c* value);

  static inline void setStaticF___9__2_0(::System::Func_2<::System::Type*, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeStringFormatter____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TypeStringFormatter____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeStringFormatter____c(__TypeStringFormatter____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeStringFormatter____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeStringFormatter____c(__TypeStringFormatter____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::__TypeStringFormatter____c, 0x10>, "Size mismatch!");

} // namespace ModestTree
// Type: ModestTree::TypeStringFormatter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ModestTree {
// Is value type: false
// CS Name: ::ModestTree::TypeStringFormatter*
class CORDL_TYPE TypeStringFormatter : public ::System::Object {
public:
  // Declarations
  using __c = ::ModestTree::__TypeStringFormatter____c;

  /// @brief Field _prettyNameCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__prettyNameCache, put = setStaticF__prettyNameCache))::System::Collections::Generic::Dictionary_2<::System::Type*, ::StringW>* _prettyNameCache;

  /// @brief Method GetCSharpTypeName, addr 0x3612db0, size 0x2f8, virtual false, abstract: false, final false
  static inline ::StringW GetCSharpTypeName(::StringW typeName);

  /// @brief Method PrettyName, addr 0x3611070, size 0xec, virtual false, abstract: false, final false
  static inline ::StringW PrettyName(::System::Type* type);

  /// @brief Method PrettyNameInternal, addr 0x3612978, size 0x438, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ModestTree::TypeStringFormatter, 0x10>, "Size mismatch!");

} // namespace ModestTree
NEED_NO_BOX(::ModestTree::TypeStringFormatter);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::TypeStringFormatter*, "ModestTree", "TypeStringFormatter");
NEED_NO_BOX(::ModestTree::__TypeStringFormatter____c);
DEFINE_IL2CPP_ARG_TYPE(::ModestTree::__TypeStringFormatter____c*, "ModestTree", "TypeStringFormatter/<>c");
