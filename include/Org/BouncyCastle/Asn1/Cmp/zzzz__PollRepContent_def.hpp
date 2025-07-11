#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cmp/PollRepContent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(PollRepContent)
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiFreeText;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class PollRepContent;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::PollRepContent);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cmp.PollRepContent
class CORDL_TYPE PollRepContent : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_CertReqID)) ::Org::BouncyCastle::Asn1::DerInteger* CertReqID;

  __declspec(property(get = get_CheckAfter)) ::Org::BouncyCastle::Asn1::DerInteger* CheckAfter;

  __declspec(property(get = get_Reason)) ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* Reason;

  /// @brief Field certReqId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_certReqId, put = __cordl_internal_set_certReqId)) ::Org::BouncyCastle::Asn1::DerInteger* certReqId;

  /// @brief Field checkAfter, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_checkAfter, put = __cordl_internal_set_checkAfter)) ::Org::BouncyCastle::Asn1::DerInteger* checkAfter;

  /// @brief Field reason, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_reason, put = __cordl_internal_set_reason)) ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* reason;

  /// @brief Method GetInstance, addr 0x22f94d4, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::PollRepContent* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PollRepContent* New_ctor(::Org::BouncyCastle::Asn1::DerInteger* certReqId, ::Org::BouncyCastle::Asn1::DerInteger* checkAfter);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PollRepContent* New_ctor(::Org::BouncyCastle::Asn1::DerInteger* certReqId, ::Org::BouncyCastle::Asn1::DerInteger* checkAfter,
                                                                         ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* reason);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PollRepContent* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x22fcec4, size 0x170, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_certReqId() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_certReqId();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_checkAfter() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_checkAfter();

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* const& __cordl_internal_get_reason() const;

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*& __cordl_internal_get_reason();

  constexpr void __cordl_internal_set_certReqId(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_checkAfter(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_reason(::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* value);

  /// @brief Method .ctor, addr 0x22fce40, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerInteger* certReqId, ::Org::BouncyCastle::Asn1::DerInteger* checkAfter);

  /// @brief Method .ctor, addr 0x22fce70, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerInteger* certReqId, ::Org::BouncyCastle::Asn1::DerInteger* checkAfter, ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* reason);

  /// @brief Method .ctor, addr 0x22fcd9c, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_CertReqID, addr 0x22fceac, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_CertReqID();

  /// @brief Method get_CheckAfter, addr 0x22fceb4, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_CheckAfter();

  /// @brief Method get_Reason, addr 0x22fcebc, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* get_Reason();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PollRepContent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PollRepContent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PollRepContent(PollRepContent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PollRepContent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PollRepContent(PollRepContent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 44 };

  /// @brief Field certReqId, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___certReqId;

  /// @brief Field checkAfter, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___checkAfter;

  /// @brief Field reason, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* ___reason;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PollRepContent, ___certReqId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PollRepContent, ___checkAfter) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PollRepContent, ___reason) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::PollRepContent, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::PollRepContent);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::PollRepContent*, "Org.BouncyCastle.Asn1.Cmp", "PollRepContent");
