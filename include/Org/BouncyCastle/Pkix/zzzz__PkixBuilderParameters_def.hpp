#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkix/PkixBuilderParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Pkix/zzzz__PkixParameters_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PkixBuilderParameters)
namespace Org::BouncyCastle::Pkix {
class PkixParameters;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Selector;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixBuilderParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::PkixBuilderParameters);
// Dependencies Org.BouncyCastle.Pkix.PkixParameters
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// CS Name: Org.BouncyCastle.Pkix.PkixBuilderParameters
class CORDL_TYPE PkixBuilderParameters : public ::Org::BouncyCastle::Pkix::PkixParameters {
public:
  // Declarations
  __declspec(property(get = get_MaxPathLength, put = set_MaxPathLength)) int32_t MaxPathLength;

  /// @brief Field excludedCerts, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_excludedCerts, put = __cordl_internal_set_excludedCerts)) ::Org::BouncyCastle::Utilities::Collections::ISet* excludedCerts;

  /// @brief Field maxPathLength, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_maxPathLength, put = __cordl_internal_set_maxPathLength)) int32_t maxPathLength;

  /// @brief Method Clone, addr 0x34c7e3c, size 0xbc, virtual true, abstract: false, final false
  inline ::System::Object* Clone();

  /// @brief Method GetExcludedCerts, addr 0x34c7c90, size 0x64, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* GetExcludedCerts();

  /// @brief Method GetInstance, addr 0x34c7aa8, size 0xf0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Pkix::PkixBuilderParameters* GetInstance(::Org::BouncyCastle::Pkix::PkixParameters* pkixParams);

  static inline ::Org::BouncyCastle::Pkix::PkixBuilderParameters* New_ctor(::Org::BouncyCastle::Utilities::Collections::ISet* trustAnchors,
                                                                           ::Org::BouncyCastle::X509::Store::IX509Selector* targetConstraints);

  /// @brief Method SetExcludedCerts, addr 0x34c7cf4, size 0x7c, virtual true, abstract: false, final false
  inline void SetExcludedCerts(::Org::BouncyCastle::Utilities::Collections::ISet* excludedCerts);

  /// @brief Method SetParams, addr 0x34c7d70, size 0xcc, virtual true, abstract: false, final false
  inline void SetParams(::Org::BouncyCastle::Pkix::PkixParameters* parameters);

  /// @brief Method ToString, addr 0x34c7ef8, size 0x170, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* const& __cordl_internal_get_excludedCerts() const;

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __cordl_internal_get_excludedCerts();

  constexpr int32_t const& __cordl_internal_get_maxPathLength() const;

  constexpr int32_t& __cordl_internal_get_maxPathLength();

  constexpr void __cordl_internal_set_excludedCerts(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  constexpr void __cordl_internal_set_maxPathLength(int32_t value);

  /// @brief Method .ctor, addr 0x34c7b98, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Utilities::Collections::ISet* trustAnchors, ::Org::BouncyCastle::X509::Store::IX509Selector* targetConstraints);

  /// @brief Method get_MaxPathLength, addr 0x34c7c2c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_MaxPathLength();

  /// @brief Method set_MaxPathLength, addr 0x34c7c34, size 0x5c, virtual true, abstract: false, final false
  inline void set_MaxPathLength(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkixBuilderParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PkixBuilderParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkixBuilderParameters(PkixBuilderParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkixBuilderParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkixBuilderParameters(PkixBuilderParameters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1714 };

  /// @brief Field maxPathLength, offset: 0x90, size: 0x4, def value: None
  int32_t ___maxPathLength;

  /// @brief Field excludedCerts, offset: 0x98, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Collections::ISet* ___excludedCerts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixBuilderParameters, ___maxPathLength) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Pkix::PkixBuilderParameters, ___excludedCerts) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::PkixBuilderParameters, 0xa0>, "Size mismatch!");

} // namespace Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::PkixBuilderParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::PkixBuilderParameters*, "Org.BouncyCastle.Pkix", "PkixBuilderParameters");
