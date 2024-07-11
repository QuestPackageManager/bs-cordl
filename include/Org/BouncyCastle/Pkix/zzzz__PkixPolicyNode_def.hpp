#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkix/PkixPolicyNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PkixPolicyNode)
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IList;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixPolicyNode;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::PkixPolicyNode);
// Type: Org.BouncyCastle.Pkix::PkixPolicyNode
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Pkix::PkixPolicyNode*
class CORDL_TYPE PkixPolicyNode : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Children))::System::Collections::IEnumerable* Children;

  __declspec(property(get = get_Depth)) int32_t Depth;

  __declspec(property(get = get_ExpectedPolicies, put = set_ExpectedPolicies))::Org::BouncyCastle::Utilities::Collections::ISet* ExpectedPolicies;

  __declspec(property(get = get_HasChildren)) bool HasChildren;

  __declspec(property(get = get_IsCritical, put = set_IsCritical)) bool IsCritical;

  __declspec(property(get = get_Parent, put = set_Parent))::Org::BouncyCastle::Pkix::PkixPolicyNode* Parent;

  __declspec(property(get = get_PolicyQualifiers))::Org::BouncyCastle::Utilities::Collections::ISet* PolicyQualifiers;

  __declspec(property(get = get_ValidPolicy))::StringW ValidPolicy;

  /// @brief Field mChildren, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mChildren, put = __cordl_internal_set_mChildren))::System::Collections::IList* mChildren;

  /// @brief Field mCritical, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_mCritical, put = __cordl_internal_set_mCritical)) bool mCritical;

  /// @brief Field mDepth, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_mDepth, put = __cordl_internal_set_mDepth)) int32_t mDepth;

  /// @brief Field mExpectedPolicies, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mExpectedPolicies, put = __cordl_internal_set_mExpectedPolicies))::Org::BouncyCastle::Utilities::Collections::ISet* mExpectedPolicies;

  /// @brief Field mParent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mParent, put = __cordl_internal_set_mParent))::Org::BouncyCastle::Pkix::PkixPolicyNode* mParent;

  /// @brief Field mPolicyQualifiers, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mPolicyQualifiers, put = __cordl_internal_set_mPolicyQualifiers))::Org::BouncyCastle::Utilities::Collections::ISet* mPolicyQualifiers;

  /// @brief Field mValidPolicy, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mValidPolicy, put = __cordl_internal_set_mValidPolicy))::StringW mValidPolicy;

  /// @brief Method AddChild, addr 0x1384be8, size 0xc8, virtual true, abstract: false, final false
  inline void AddChild(::Org::BouncyCastle::Pkix::PkixPolicyNode* child);

  /// @brief Method Clone, addr 0x1385258, size 0x10, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method Copy, addr 0x1385268, size 0x45c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Pkix::PkixPolicyNode* Copy();

  static inline ::Org::BouncyCastle::Pkix::PkixPolicyNode* New_ctor(::System::Collections::IList* children, int32_t depth, ::Org::BouncyCastle::Utilities::Collections::ISet* expectedPolicies,
                                                                    ::Org::BouncyCastle::Pkix::PkixPolicyNode* parent, ::Org::BouncyCastle::Utilities::Collections::ISet* policyQualifiers,
                                                                    ::StringW validPolicy, bool critical);

  /// @brief Method RemoveChild, addr 0x1384cb0, size 0xac, virtual true, abstract: false, final false
  inline void RemoveChild(::Org::BouncyCastle::Pkix::PkixPolicyNode* child);

  /// @brief Method ToString, addr 0x1384d5c, size 0x54, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x1384db0, size 0x4a8, virtual true, abstract: false, final false
  inline ::StringW ToString(::StringW indent);

  constexpr ::System::Collections::IList*& __cordl_internal_get_mChildren();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get_mChildren() const;

  constexpr bool const& __cordl_internal_get_mCritical() const;

  constexpr bool& __cordl_internal_get_mCritical();

  constexpr int32_t const& __cordl_internal_get_mDepth() const;

  constexpr int32_t& __cordl_internal_get_mDepth();

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __cordl_internal_get_mExpectedPolicies();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& __cordl_internal_get_mExpectedPolicies() const;

  constexpr ::Org::BouncyCastle::Pkix::PkixPolicyNode*& __cordl_internal_get_mParent();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Pkix::PkixPolicyNode*> const& __cordl_internal_get_mParent() const;

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __cordl_internal_get_mPolicyQualifiers();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& __cordl_internal_get_mPolicyQualifiers() const;

  constexpr ::StringW const& __cordl_internal_get_mValidPolicy() const;

  constexpr ::StringW& __cordl_internal_get_mValidPolicy();

  constexpr void __cordl_internal_set_mChildren(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_mCritical(bool value);

  constexpr void __cordl_internal_set_mDepth(int32_t value);

  constexpr void __cordl_internal_set_mExpectedPolicies(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  constexpr void __cordl_internal_set_mParent(::Org::BouncyCastle::Pkix::PkixPolicyNode* value);

  constexpr void __cordl_internal_set_mPolicyQualifiers(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  constexpr void __cordl_internal_set_mValidPolicy(::StringW value);

  /// @brief Method .ctor, addr 0x1368ea4, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IList* children, int32_t depth, ::Org::BouncyCastle::Utilities::Collections::ISet* expectedPolicies, ::Org::BouncyCastle::Pkix::PkixPolicyNode* parent,
                    ::Org::BouncyCastle::Utilities::Collections::ISet* policyQualifiers, ::StringW validPolicy, bool critical);

  /// @brief Method get_Children, addr 0x1384964, size 0x68, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerable* get_Children();

  /// @brief Method get_Depth, addr 0x138495c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Depth();

  /// @brief Method get_ExpectedPolicies, addr 0x1384b00, size 0x68, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* get_ExpectedPolicies();

  /// @brief Method get_HasChildren, addr 0x1384a50, size 0xb0, virtual true, abstract: false, final false
  inline bool get_HasChildren();

  /// @brief Method get_IsCritical, addr 0x13849cc, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsCritical();

  /// @brief Method get_Parent, addr 0x1384bd8, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Pkix::PkixPolicyNode* get_Parent();

  /// @brief Method get_PolicyQualifiers, addr 0x13849e0, size 0x68, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* get_PolicyQualifiers();

  /// @brief Method get_ValidPolicy, addr 0x1384a48, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_ValidPolicy();

  /// @brief Method set_ExpectedPolicies, addr 0x1384b68, size 0x70, virtual true, abstract: false, final false
  inline void set_ExpectedPolicies(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  /// @brief Method set_IsCritical, addr 0x13849d4, size 0xc, virtual true, abstract: false, final false
  inline void set_IsCritical(bool value);

  /// @brief Method set_Parent, addr 0x1384be0, size 0x8, virtual true, abstract: false, final false
  inline void set_Parent(::Org::BouncyCastle::Pkix::PkixPolicyNode* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkixPolicyNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PkixPolicyNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkixPolicyNode(PkixPolicyNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkixPolicyNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkixPolicyNode(PkixPolicyNode const&) = delete;

  /// @brief Field mChildren, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ___mChildren;

  /// @brief Field mDepth, offset: 0x18, size: 0x4, def value: None
  int32_t ___mDepth;

  /// @brief Field mExpectedPolicies, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Collections::ISet* ___mExpectedPolicies;

  /// @brief Field mParent, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Pkix::PkixPolicyNode* ___mParent;

  /// @brief Field mPolicyQualifiers, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Collections::ISet* ___mPolicyQualifiers;

  /// @brief Field mValidPolicy, offset: 0x38, size: 0x8, def value: None
  ::StringW ___mValidPolicy;

  /// @brief Field mCritical, offset: 0x40, size: 0x1, def value: None
  bool ___mCritical;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::PkixPolicyNode, 0x48>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixPolicyNode, ___mChildren) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixPolicyNode, ___mDepth) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixPolicyNode, ___mExpectedPolicies) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixPolicyNode, ___mParent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixPolicyNode, ___mPolicyQualifiers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixPolicyNode, ___mValidPolicy) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixPolicyNode, ___mCritical) == 0x40, "Offset mismatch!");

} // namespace Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::PkixPolicyNode);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::PkixPolicyNode*, "Org.BouncyCastle.Pkix", "PkixPolicyNode");
