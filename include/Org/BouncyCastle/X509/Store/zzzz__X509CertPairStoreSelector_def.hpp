#pragma once
// IWYU pragma private; include "Org/BouncyCastle/X509/Store/X509CertPairStoreSelector.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(X509CertPairStoreSelector)
namespace Org::BouncyCastle::X509::Store {
class IX509Selector;
}
namespace Org::BouncyCastle::X509::Store {
class X509CertStoreSelector;
}
namespace Org::BouncyCastle::X509 {
class X509CertificatePair;
}
namespace System {
class ICloneable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::X509::Store {
class X509CertPairStoreSelector;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector);
// Type: Org.BouncyCastle.X509.Store::X509CertPairStoreSelector
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509::Store {
// Is value type: false
// CS Name: ::Org.BouncyCastle.X509.Store::X509CertPairStoreSelector*
class CORDL_TYPE X509CertPairStoreSelector : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CertPair, put = set_CertPair))::Org::BouncyCastle::X509::X509CertificatePair* CertPair;

  __declspec(property(get = get_ForwardSelector, put = set_ForwardSelector))::Org::BouncyCastle::X509::Store::X509CertStoreSelector* ForwardSelector;

  __declspec(property(get = get_ReverseSelector, put = set_ReverseSelector))::Org::BouncyCastle::X509::Store::X509CertStoreSelector* ReverseSelector;

  /// @brief Field certPair, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_certPair, put = __cordl_internal_set_certPair))::Org::BouncyCastle::X509::X509CertificatePair* certPair;

  /// @brief Field forwardSelector, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_forwardSelector, put = __cordl_internal_set_forwardSelector))::Org::BouncyCastle::X509::Store::X509CertStoreSelector* forwardSelector;

  /// @brief Field reverseSelector, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_reverseSelector, put = __cordl_internal_set_reverseSelector))::Org::BouncyCastle::X509::Store::X509CertStoreSelector* reverseSelector;

  /// @brief Convert operator to "::Org::BouncyCastle::X509::Store::IX509Selector"
  constexpr operator ::Org::BouncyCastle::X509::Store::IX509Selector*() noexcept;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Clone, addr 0x13db66c, size 0x60, virtual true, abstract: false, final true
  inline ::System::Object* Clone();

  /// @brief Method CloneSelector, addr 0x13db408, size 0x8c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::X509::Store::X509CertStoreSelector* CloneSelector(::Org::BouncyCastle::X509::Store::X509CertStoreSelector* s);

  /// @brief Method Match, addr 0x13db540, size 0x12c, virtual true, abstract: false, final true
  inline bool Match(::System::Object* obj);

  static inline ::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector* New_ctor();

  static inline ::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector* New_ctor(::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector* o);

  constexpr ::Org::BouncyCastle::X509::X509CertificatePair*& __cordl_internal_get_certPair();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::X509CertificatePair*> const& __cordl_internal_get_certPair() const;

  constexpr ::Org::BouncyCastle::X509::Store::X509CertStoreSelector*& __cordl_internal_get_forwardSelector();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*> const& __cordl_internal_get_forwardSelector() const;

  constexpr ::Org::BouncyCastle::X509::Store::X509CertStoreSelector*& __cordl_internal_get_reverseSelector();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::Store::X509CertStoreSelector*> const& __cordl_internal_get_reverseSelector() const;

  constexpr void __cordl_internal_set_certPair(::Org::BouncyCastle::X509::X509CertificatePair* value);

  constexpr void __cordl_internal_set_forwardSelector(::Org::BouncyCastle::X509::Store::X509CertStoreSelector* value);

  constexpr void __cordl_internal_set_reverseSelector(::Org::BouncyCastle::X509::Store::X509CertStoreSelector* value);

  /// @brief Method .ctor, addr 0x13db494, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x13db49c, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector* o);

  /// @brief Method get_CertPair, addr 0x13db4f8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::X509CertificatePair* get_CertPair();

  /// @brief Method get_ForwardSelector, addr 0x13db4e8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::Store::X509CertStoreSelector* get_ForwardSelector();

  /// @brief Method get_ReverseSelector, addr 0x13db4f0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::X509::Store::X509CertStoreSelector* get_ReverseSelector();

  /// @brief Convert to "::Org::BouncyCastle::X509::Store::IX509Selector"
  constexpr ::Org::BouncyCastle::X509::Store::IX509Selector* i___Org__BouncyCastle__X509__Store__IX509Selector() noexcept;

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Method set_CertPair, addr 0x13db500, size 0x8, virtual false, abstract: false, final false
  inline void set_CertPair(::Org::BouncyCastle::X509::X509CertificatePair* value);

  /// @brief Method set_ForwardSelector, addr 0x13db508, size 0x1c, virtual false, abstract: false, final false
  inline void set_ForwardSelector(::Org::BouncyCastle::X509::Store::X509CertStoreSelector* value);

  /// @brief Method set_ReverseSelector, addr 0x13db524, size 0x1c, virtual false, abstract: false, final false
  inline void set_ReverseSelector(::Org::BouncyCastle::X509::Store::X509CertStoreSelector* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509CertPairStoreSelector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509CertPairStoreSelector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509CertPairStoreSelector(X509CertPairStoreSelector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509CertPairStoreSelector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509CertPairStoreSelector(X509CertPairStoreSelector const&) = delete;

  /// @brief Field certPair, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::X509::X509CertificatePair* ___certPair;

  /// @brief Field forwardSelector, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::X509::Store::X509CertStoreSelector* ___forwardSelector;

  /// @brief Field reverseSelector, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::X509::Store::X509CertStoreSelector* ___reverseSelector;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector, ___certPair) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector, ___forwardSelector) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector, ___reverseSelector) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::X509::Store
NEED_NO_BOX(::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::Store::X509CertPairStoreSelector*, "Org.BouncyCastle.X509.Store", "X509CertPairStoreSelector");
