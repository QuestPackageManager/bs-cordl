#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Pkix/zzzz__PkixParameters_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PkixBuilderParameters)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Pkix {
class PkixParameters;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Selector;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixBuilderParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::PkixBuilderParameters);
// Type: Org.BouncyCastle.Pkix::PkixBuilderParameters
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1713))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1714))
// CS Name: ::Org.BouncyCastle.Pkix::PkixBuilderParameters*
class CORDL_TYPE PkixBuilderParameters : public ::Org::BouncyCastle::Pkix::PkixParameters {
public:
  // Declarations
  /// @brief Field maxPathLength, offset 0x90, size 0x4
  __declspec(property(get = __get_maxPathLength, put = __set_maxPathLength)) int32_t maxPathLength;

  /// @brief Field excludedCerts, offset 0x98, size 0x8
  __declspec(property(get = __get_excludedCerts, put = __set_excludedCerts))::Org::BouncyCastle::Utilities::Collections::ISet* excludedCerts;

  __declspec(property(get = get_MaxPathLength, put = set_MaxPathLength)) int32_t MaxPathLength;

  constexpr int32_t& __get_maxPathLength();

  constexpr int32_t const& __get_maxPathLength() const;

  constexpr void __set_maxPathLength(int32_t value);

  constexpr ::Org::BouncyCastle::Utilities::Collections::ISet*& __get_excludedCerts();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> const& __get_excludedCerts() const;

  constexpr void __set_excludedCerts(::Org::BouncyCastle::Utilities::Collections::ISet* value);

  /// @brief Method GetInstance addr 0x10ef8d8 size 0xec virtual false final false
  static inline ::Org::BouncyCastle::Pkix::PkixBuilderParameters* GetInstance(::Org::BouncyCastle::Pkix::PkixParameters* pkixParams);

  static inline ::Org::BouncyCastle::Pkix::PkixBuilderParameters* New_ctor(::Org::BouncyCastle::Utilities::Collections::ISet* trustAnchors,
                                                                           ::Org::BouncyCastle::X509::Store::IX509Selector* targetConstraints);

  /// @brief Method .ctor addr 0x10ef9c4 size 0x98 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Utilities::Collections::ISet* trustAnchors, ::Org::BouncyCastle::X509::Store::IX509Selector* targetConstraints);

  /// @brief Method get_MaxPathLength addr 0x10efa5c size 0x8 virtual true final false
  inline int32_t get_MaxPathLength();

  /// @brief Method set_MaxPathLength addr 0x10efa64 size 0x64 virtual true final false
  inline void set_MaxPathLength(int32_t value);

  /// @brief Method GetExcludedCerts addr 0x10efac8 size 0x68 virtual true final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* GetExcludedCerts();

  /// @brief Method SetExcludedCerts addr 0x10efb30 size 0x80 virtual true final false
  inline void SetExcludedCerts(::Org::BouncyCastle::Utilities::Collections::ISet* excludedCerts);

  /// @brief Method SetParams addr 0x10efbb0 size 0xc4 virtual true final false
  inline void SetParams(::Org::BouncyCastle::Pkix::PkixParameters* parameters);

  /// @brief Method Clone addr 0x10efc74 size 0xb8 virtual true final false
  inline ::System::Object* Clone();

  /// @brief Method ToString addr 0x10efd2c size 0x174 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "PkixBuilderParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkixBuilderParameters(PkixBuilderParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkixBuilderParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkixBuilderParameters(PkixBuilderParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkixBuilderParameters();

public:
  /// @brief Field maxPathLength, offset: 0x90, size: 0x4, def value: None
  int32_t ___maxPathLength;

  /// @brief Field excludedCerts, offset: 0x98, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Collections::ISet* ___excludedCerts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::PkixBuilderParameters, 0xa0>, "Size mismatch!");

} // namespace Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::PkixBuilderParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::PkixBuilderParameters*, "Org.BouncyCastle.Pkix", "PkixBuilderParameters");
