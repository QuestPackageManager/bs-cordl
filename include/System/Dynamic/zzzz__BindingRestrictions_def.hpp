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
class BindingRestrictions_CustomRestriction;
}
namespace GlobalNamespace {
class BindingRestrictions_InstanceRestriction;
}
namespace GlobalNamespace {
class BindingRestrictions_MergedRestriction;
}
namespace GlobalNamespace {
class BindingRestrictions_TypeRestriction;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System::Dynamic {
class BindingRestrictions_BindingRestrictionsProxy;
}
namespace System::Dynamic {
class BindingRestrictions_TestBuilder;
}
namespace System::Dynamic {
class DynamicMetaObject;
}
namespace System::Dynamic {
struct TestBuilder_BindingRestrictions_AndNode;
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
class BindingRestrictions_BindingRestrictionsProxy;
}
namespace System::Dynamic {
class BindingRestrictions_TestBuilder;
}
namespace System::Dynamic {
struct TestBuilder_BindingRestrictions_AndNode;
}
// Write type traits
MARK_REF_PTR_T(::System::Dynamic::BindingRestrictions);
MARK_REF_PTR_T(::System::Dynamic::BindingRestrictions_BindingRestrictionsProxy);
MARK_REF_PTR_T(::System::Dynamic::BindingRestrictions_TestBuilder);
MARK_VAL_T(::System::Dynamic::TestBuilder_BindingRestrictions_AndNode);
// Dependencies
namespace System::Dynamic {
// Is value type: true
// CS Name: System.Dynamic.BindingRestrictions/TestBuilder/AndNode
struct CORDL_TYPE TestBuilder_BindingRestrictions_AndNode {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr TestBuilder_BindingRestrictions_AndNode();

  // Ctor Parameters [CppParam { name: "Depth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Node", ty: "::System::Linq::Expressions::Expression*", modifiers: "", def_value: None
  // }]
  constexpr TestBuilder_BindingRestrictions_AndNode(int32_t Depth, ::System::Linq::Expressions::Expression* Node) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14144 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field Depth, offset: 0x0, size: 0x4, def value: None
  int32_t Depth;

  /// @brief Field Node, offset: 0x8, size: 0x8, def value: None
  ::System::Linq::Expressions::Expression* Node;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Dynamic::TestBuilder_BindingRestrictions_AndNode, Depth) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Dynamic::TestBuilder_BindingRestrictions_AndNode, Node) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Dynamic::TestBuilder_BindingRestrictions_AndNode, 0x10>, "Size mismatch!");

} // namespace System::Dynamic
// Dependencies System.Object
namespace System::Dynamic {
// Is value type: false
// CS Name: System.Dynamic.BindingRestrictions/TestBuilder
class CORDL_TYPE BindingRestrictions_TestBuilder : public ::System::Object {
public:
  // Declarations
  using AndNode = ::System::Dynamic::TestBuilder_BindingRestrictions_AndNode;

  /// @brief Field _tests, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__tests,
                      put = __cordl_internal_set__tests)) ::System::Collections::Generic::Stack_1<::System::Dynamic::TestBuilder_BindingRestrictions_AndNode>* _tests;

  /// @brief Field _unique, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__unique, put = __cordl_internal_set__unique)) ::System::Collections::Generic::HashSet_1<::System::Dynamic::BindingRestrictions*>* _unique;

  /// @brief Method Append, addr 0x40fd4c4, size 0x8c, virtual false, abstract: false, final false
  inline void Append(::System::Dynamic::BindingRestrictions* restrictions);

  static inline ::System::Dynamic::BindingRestrictions_TestBuilder* New_ctor();

  /// @brief Method Push, addr 0x40fd550, size 0x134, virtual false, abstract: false, final false
  inline void Push(::System::Linq::Expressions::Expression* node, int32_t depth);

  /// @brief Method ToExpression, addr 0x40fd684, size 0xd4, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* ToExpression();

  constexpr ::System::Collections::Generic::Stack_1<::System::Dynamic::TestBuilder_BindingRestrictions_AndNode>* const& __cordl_internal_get__tests() const;

  constexpr ::System::Collections::Generic::Stack_1<::System::Dynamic::TestBuilder_BindingRestrictions_AndNode>*& __cordl_internal_get__tests();

  constexpr ::System::Collections::Generic::HashSet_1<::System::Dynamic::BindingRestrictions*>* const& __cordl_internal_get__unique() const;

  constexpr ::System::Collections::Generic::HashSet_1<::System::Dynamic::BindingRestrictions*>*& __cordl_internal_get__unique();

  constexpr void __cordl_internal_set__tests(::System::Collections::Generic::Stack_1<::System::Dynamic::TestBuilder_BindingRestrictions_AndNode>* value);

  constexpr void __cordl_internal_set__unique(::System::Collections::Generic::HashSet_1<::System::Dynamic::BindingRestrictions*>* value);

  /// @brief Method .ctor, addr 0x40fd758, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindingRestrictions_TestBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BindingRestrictions_TestBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindingRestrictions_TestBuilder(BindingRestrictions_TestBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindingRestrictions_TestBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindingRestrictions_TestBuilder(BindingRestrictions_TestBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14145 };

  /// @brief Field _unique, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::System::Dynamic::BindingRestrictions*>* ____unique;

  /// @brief Field _tests, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::System::Dynamic::TestBuilder_BindingRestrictions_AndNode>* ____tests;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Dynamic::BindingRestrictions_TestBuilder, ____unique) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Dynamic::BindingRestrictions_TestBuilder, ____tests) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Dynamic::BindingRestrictions_TestBuilder, 0x20>, "Size mismatch!");

} // namespace System::Dynamic
// Dependencies System.Object
namespace System::Dynamic {
// Is value type: false
// CS Name: System.Dynamic.BindingRestrictions/BindingRestrictionsProxy
class CORDL_TYPE BindingRestrictions_BindingRestrictionsProxy : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindingRestrictions_BindingRestrictionsProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BindingRestrictions_BindingRestrictionsProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindingRestrictions_BindingRestrictionsProxy(BindingRestrictions_BindingRestrictionsProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindingRestrictions_BindingRestrictionsProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindingRestrictions_BindingRestrictionsProxy(BindingRestrictions_BindingRestrictionsProxy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14150 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Dynamic::BindingRestrictions_BindingRestrictionsProxy, 0x10>, "Size mismatch!");

} // namespace System::Dynamic
// Dependencies System.Object
namespace System::Dynamic {
// Is value type: false
// CS Name: System.Dynamic.BindingRestrictions
class CORDL_TYPE BindingRestrictions : public ::System::Object {
public:
  // Declarations
  using CustomRestriction = ::GlobalNamespace::BindingRestrictions_CustomRestriction;

  using InstanceRestriction = ::GlobalNamespace::BindingRestrictions_InstanceRestriction;

  using MergedRestriction = ::GlobalNamespace::BindingRestrictions_MergedRestriction;

  using TypeRestriction = ::GlobalNamespace::BindingRestrictions_TypeRestriction;

  using BindingRestrictionsProxy = ::System::Dynamic::BindingRestrictions_BindingRestrictionsProxy;

  using TestBuilder = ::System::Dynamic::BindingRestrictions_TestBuilder;

  /// @brief Field Empty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty)) ::System::Dynamic::BindingRestrictions* Empty;

  /// @brief Method GetExpression, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* GetExpression();

  /// @brief Method GetInstanceRestriction, addr 0x40fd274, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Dynamic::BindingRestrictions* GetInstanceRestriction(::System::Linq::Expressions::Expression* expression, ::System::Object* instance);

  /// @brief Method GetTypeRestriction, addr 0x40fd004, size 0xb8, virtual false, abstract: false, final false
  static inline ::System::Dynamic::BindingRestrictions* GetTypeRestriction(::System::Linq::Expressions::Expression* expression, ::System::Type* type);

  /// @brief Method GetTypeRestriction, addr 0x40fd12c, size 0xbc, virtual false, abstract: false, final false
  static inline ::System::Dynamic::BindingRestrictions* GetTypeRestriction(::System::Dynamic::DynamicMetaObject* obj);

  /// @brief Method Merge, addr 0x40fcea4, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Dynamic::BindingRestrictions* Merge(::System::Dynamic::BindingRestrictions* restrictions);

  static inline ::System::Dynamic::BindingRestrictions* New_ctor();

  /// @brief Method ToExpression, addr 0x40fd3a4, size 0xc, virtual false, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* ToExpression();

  /// @brief Method .ctor, addr 0x40fce9c, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14151 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Dynamic::BindingRestrictions, 0x10>, "Size mismatch!");

} // namespace System::Dynamic
NEED_NO_BOX(::System::Dynamic::BindingRestrictions);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::BindingRestrictions*, "System.Dynamic", "BindingRestrictions");
NEED_NO_BOX(::System::Dynamic::BindingRestrictions_BindingRestrictionsProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::BindingRestrictions_BindingRestrictionsProxy*, "System.Dynamic", "BindingRestrictions/BindingRestrictionsProxy");
NEED_NO_BOX(::System::Dynamic::BindingRestrictions_TestBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::BindingRestrictions_TestBuilder*, "System.Dynamic", "BindingRestrictions/TestBuilder");
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::TestBuilder_BindingRestrictions_AndNode, "System.Dynamic", "BindingRestrictions/TestBuilder/AndNode");
