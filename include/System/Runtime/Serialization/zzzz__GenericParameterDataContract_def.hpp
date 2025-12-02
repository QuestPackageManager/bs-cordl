#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/GenericParameterDataContract.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__DataContract_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GenericParameterDataContract)
namespace System::Runtime::Serialization {
class GenericParameterDataContract_GenericParameterDataContractCriticalHelper;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class GenericParameterDataContract;
}
namespace System::Runtime::Serialization {
class GenericParameterDataContract_GenericParameterDataContractCriticalHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::GenericParameterDataContract);
MARK_REF_PTR_T(::System::Runtime::Serialization::GenericParameterDataContract_GenericParameterDataContractCriticalHelper);
// Dependencies System.Runtime.Serialization.DataContract::DataContractCriticalHelper
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.GenericParameterDataContract/GenericParameterDataContractCriticalHelper
class CORDL_TYPE GenericParameterDataContract_GenericParameterDataContractCriticalHelper : public ::System::Runtime::Serialization::DataContract_DataContractCriticalHelper {
public:
  // Declarations
  /// @brief Field parameterPosition, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_parameterPosition, put = __cordl_internal_set_parameterPosition)) int32_t parameterPosition;

  static inline ::System::Runtime::Serialization::GenericParameterDataContract_GenericParameterDataContractCriticalHelper* New_ctor(::System::Type* type);

  constexpr int32_t const& __cordl_internal_get_parameterPosition() const;

  constexpr int32_t& __cordl_internal_get_parameterPosition();

  constexpr void __cordl_internal_set_parameterPosition(int32_t value);

  /// @brief Method .ctor, addr 0x5f391f8, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenericParameterDataContract_GenericParameterDataContractCriticalHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GenericParameterDataContract_GenericParameterDataContractCriticalHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenericParameterDataContract_GenericParameterDataContractCriticalHelper(GenericParameterDataContract_GenericParameterDataContractCriticalHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenericParameterDataContract_GenericParameterDataContractCriticalHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenericParameterDataContract_GenericParameterDataContractCriticalHelper(GenericParameterDataContract_GenericParameterDataContractCriticalHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17000 };

  /// @brief Field parameterPosition, offset: 0x48, size: 0x4, def value: None
  int32_t ___parameterPosition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::GenericParameterDataContract_GenericParameterDataContractCriticalHelper, ___parameterPosition) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::GenericParameterDataContract_GenericParameterDataContractCriticalHelper, 0x50>, "Size mismatch!");

} // namespace System::Runtime::Serialization
// Dependencies System.Runtime.Serialization.DataContract
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.GenericParameterDataContract
class CORDL_TYPE GenericParameterDataContract : public ::System::Runtime::Serialization::DataContract {
public:
  // Declarations
  using GenericParameterDataContractCriticalHelper = ::System::Runtime::Serialization::GenericParameterDataContract_GenericParameterDataContractCriticalHelper;

  __declspec(property(get = get_IsBuiltInDataContract)) bool IsBuiltInDataContract;

  /// @brief Field helper, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_helper,
                      put = __cordl_internal_set_helper)) ::System::Runtime::Serialization::GenericParameterDataContract_GenericParameterDataContractCriticalHelper* helper;

  static inline ::System::Runtime::Serialization::GenericParameterDataContract* New_ctor(::System::Type* type);

  constexpr ::System::Runtime::Serialization::GenericParameterDataContract_GenericParameterDataContractCriticalHelper* const& __cordl_internal_get_helper() const;

  constexpr ::System::Runtime::Serialization::GenericParameterDataContract_GenericParameterDataContractCriticalHelper*& __cordl_internal_get_helper();

  constexpr void __cordl_internal_set_helper(::System::Runtime::Serialization::GenericParameterDataContract_GenericParameterDataContractCriticalHelper* value);

  /// @brief Method .ctor, addr 0x5f2c364, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

  /// @brief Method get_IsBuiltInDataContract, addr 0x5f3929c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsBuiltInDataContract();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenericParameterDataContract();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GenericParameterDataContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenericParameterDataContract(GenericParameterDataContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenericParameterDataContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenericParameterDataContract(GenericParameterDataContract const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17001 };

  /// @brief Field helper, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::Serialization::GenericParameterDataContract_GenericParameterDataContractCriticalHelper* ___helper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::GenericParameterDataContract, ___helper) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::GenericParameterDataContract, 0x30>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::GenericParameterDataContract);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::GenericParameterDataContract*, "System.Runtime.Serialization", "GenericParameterDataContract");
NEED_NO_BOX(::System::Runtime::Serialization::GenericParameterDataContract_GenericParameterDataContractCriticalHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::GenericParameterDataContract_GenericParameterDataContractCriticalHelper*, "System.Runtime.Serialization",
                       "GenericParameterDataContract/GenericParameterDataContractCriticalHelper");
