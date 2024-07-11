#pragma once
// IWYU pragma private; include "System/Dynamic/BindingRestrictions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BindingRestrictions)
namespace GlobalNamespace {
struct __BindingRestrictions__TestBuilder__AndNode;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System::Dynamic {
class DynamicMetaObject;
}
namespace System::Dynamic {
class __BindingRestrictions__BindingRestrictionsProxy;
}
namespace System::Dynamic {
class __BindingRestrictions__CustomRestriction;
}
namespace System::Dynamic {
class __BindingRestrictions__InstanceRestriction;
}
namespace System::Dynamic {
class __BindingRestrictions__MergedRestriction;
}
namespace System::Dynamic {
class __BindingRestrictions__TestBuilder;
}
namespace System::Dynamic {
class __BindingRestrictions__TypeRestriction;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Dynamic {
class BindingRestrictions;
}
namespace System::Dynamic {
class __BindingRestrictions__BindingRestrictionsProxy;
}
namespace System::Dynamic {
class __BindingRestrictions__TestBuilder;
}
namespace GlobalNamespace {
struct __BindingRestrictions__TestBuilder__AndNode;
}
// Write type traits
MARK_REF_PTR_T(::System::Dynamic::BindingRestrictions);
MARK_REF_PTR_T(::System::Dynamic::__BindingRestrictions__BindingRestrictionsProxy);
MARK_REF_PTR_T(::System::Dynamic::__BindingRestrictions__TestBuilder);
MARK_VAL_T(::GlobalNamespace::__BindingRestrictions__TestBuilder__AndNode);
// Type: ::AndNode
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BindingRestrictions::TestBuilder::AndNode
struct CORDL_TYPE __BindingRestrictions__TestBuilder__AndNode {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BindingRestrictions__TestBuilder__AndNode();

  // Ctor Parameters [CppParam { name: "Depth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Node", ty: "::System::Linq::Expressions::Expression*", modifiers: "", def_value: None
  // }]
  constexpr __BindingRestrictions__TestBuilder__AndNode(int32_t Depth, ::System::Linq::Expressions::Expression* Node) noexcept;

  /// @brief Field Depth, offset: 0x0, size: 0x4, def value: None
  int32_t Depth;

  /// @brief Field Node, offset: 0x8, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* Node;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BindingRestrictions__TestBuilder__AndNode, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BindingRestrictions__TestBuilder__AndNode, Depth) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BindingRestrictions__TestBuilder__AndNode, Node) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TestBuilder
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Dynamic {
// Is value type: false
// CS Name: ::BindingRestrictions::TestBuilder*
class CORDL_TYPE __BindingRestrictions__TestBuilder : public ::System::Object {
public:
  // Declarations
  using AndNode = ::GlobalNamespace::__BindingRestrictions__TestBuilder__AndNode;

  /// @brief Field _tests, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__tests,
                      put = __cordl_internal_set__tests))::System::Collections::Generic::Stack_1<::GlobalNamespace::__BindingRestrictions__TestBuilder__AndNode>* _tests;

  /// @brief Field _unique, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__unique, put = __cordl_internal_set__unique))::System::Collections::Generic::HashSet_1<::System::Dynamic::BindingRestrictions*>* _unique;

  /// @brief Method Append, addr 0x2c81920, size 0x8c, virtual false, abstract: false, final false
  inline void Append(::System::Dynamic::BindingRestrictions* restrictions);

  static inline ::System::Dynamic::__BindingRestrictions__TestBuilder* New_ctor();

  /// @brief Method Push, addr 0x2c819ac, size 0x134, virtual false, abstract: false, final false
  inline void Push(::System::Linq::Expressions::Expression* node, int32_t depth);

  /// @brief Method ToExpression, addr 0x2c81ae0, size 0xd4, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* ToExpression();

  constexpr ::System::Collections::Generic::Stack_1<::GlobalNamespace::__BindingRestrictions__TestBuilder__AndNode>*& __cordl_internal_get__tests();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::GlobalNamespace::__BindingRestrictions__TestBuilder__AndNode>*> const& __cordl_internal_get__tests() const;

  constexpr ::System::Collections::Generic::HashSet_1<::System::Dynamic::BindingRestrictions*>*& __cordl_internal_get__unique();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::System::Dynamic::BindingRestrictions*>*> const& __cordl_internal_get__unique() const;

  constexpr void __cordl_internal_set__tests(::System::Collections::Generic::Stack_1<::GlobalNamespace::__BindingRestrictions__TestBuilder__AndNode>* value);

  constexpr void __cordl_internal_set__unique(::System::Collections::Generic::HashSet_1<::System::Dynamic::BindingRestrictions*>* value);

  /// @brief Method .ctor, addr 0x2c81bb4, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BindingRestrictions__TestBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BindingRestrictions__TestBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BindingRestrictions__TestBuilder(__BindingRestrictions__TestBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BindingRestrictions__TestBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BindingRestrictions__TestBuilder(__BindingRestrictions__TestBuilder const&) = delete;

  /// @brief Field _unique, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::System::Dynamic::BindingRestrictions*>* ____unique;

  /// @brief Field _tests, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::GlobalNamespace::__BindingRestrictions__TestBuilder__AndNode>* ____tests;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Dynamic::__BindingRestrictions__TestBuilder, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Dynamic::__BindingRestrictions__TestBuilder, ____unique) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Dynamic::__BindingRestrictions__TestBuilder, ____tests) == 0x18, "Offset mismatch!");

} // namespace System::Dynamic
// Type: ::BindingRestrictionsProxy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Dynamic {
// Is value type: false
// CS Name: ::BindingRestrictions::BindingRestrictionsProxy*
class CORDL_TYPE __BindingRestrictions__BindingRestrictionsProxy : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BindingRestrictions__BindingRestrictionsProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BindingRestrictions__BindingRestrictionsProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BindingRestrictions__BindingRestrictionsProxy(__BindingRestrictions__BindingRestrictionsProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BindingRestrictions__BindingRestrictionsProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BindingRestrictions__BindingRestrictionsProxy(__BindingRestrictions__BindingRestrictionsProxy const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Dynamic::__BindingRestrictions__BindingRestrictionsProxy, 0x10>, "Size mismatch!");

} // namespace System::Dynamic
// Type: System.Dynamic::BindingRestrictions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Dynamic {
// Is value type: false
// CS Name: ::System.Dynamic::BindingRestrictions*
class CORDL_TYPE BindingRestrictions : public ::System::Object {
public:
  // Declarations
  using BindingRestrictionsProxy = ::System::Dynamic::__BindingRestrictions__BindingRestrictionsProxy;

  using CustomRestriction = ::System::Dynamic::__BindingRestrictions__CustomRestriction;

  using InstanceRestriction = ::System::Dynamic::__BindingRestrictions__InstanceRestriction;

  using MergedRestriction = ::System::Dynamic::__BindingRestrictions__MergedRestriction;

  using TestBuilder = ::System::Dynamic::__BindingRestrictions__TestBuilder;

  using TypeRestriction = ::System::Dynamic::__BindingRestrictions__TypeRestriction;

  /// @brief Field Empty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty))::System::Dynamic::BindingRestrictions* Empty;

  /// @brief Method GetExpression, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Linq::Expressions::Expression* GetExpression();

  /// @brief Method GetInstanceRestriction, addr 0x2c816c0, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Dynamic::BindingRestrictions* GetInstanceRestriction(::System::Linq::Expressions::Expression* expression, ::System::Object* instance);

  /// @brief Method GetTypeRestriction, addr 0x2c81448, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::Dynamic::BindingRestrictions* GetTypeRestriction(::System::Linq::Expressions::Expression* expression, ::System::Type* type);

  /// @brief Method GetTypeRestriction, addr 0x2c81578, size 0xbc, virtual false, abstract: false, final false
  static inline ::System::Dynamic::BindingRestrictions* GetTypeRestriction(::System::Dynamic::DynamicMetaObject* obj);

  /// @brief Method Merge, addr 0x2c812e0, size 0xf8, virtual false, abstract: false, final false
  inline ::System::Dynamic::BindingRestrictions* Merge(::System::Dynamic::BindingRestrictions* restrictions);

  static inline ::System::Dynamic::BindingRestrictions* New_ctor();

  /// @brief Method ToExpression, addr 0x2c817f8, size 0xc, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* ToExpression();

  /// @brief Method .ctor, addr 0x2c812d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Dynamic::BindingRestrictions* getStaticF_Empty();

  static inline void setStaticF_Empty(::System::Dynamic::BindingRestrictions* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindingRestrictions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BindingRestrictions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindingRestrictions(BindingRestrictions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindingRestrictions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindingRestrictions(BindingRestrictions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Dynamic::BindingRestrictions, 0x10>, "Size mismatch!");

} // namespace System::Dynamic
NEED_NO_BOX(::System::Dynamic::BindingRestrictions);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::BindingRestrictions*, "System.Dynamic", "BindingRestrictions");
NEED_NO_BOX(::System::Dynamic::__BindingRestrictions__BindingRestrictionsProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::__BindingRestrictions__BindingRestrictionsProxy*, "System.Dynamic", "BindingRestrictions/BindingRestrictionsProxy");
NEED_NO_BOX(::System::Dynamic::__BindingRestrictions__TestBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::__BindingRestrictions__TestBuilder*, "System.Dynamic", "BindingRestrictions/TestBuilder");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BindingRestrictions__TestBuilder__AndNode, "System.Dynamic", "BindingRestrictions/TestBuilder/AndNode");
