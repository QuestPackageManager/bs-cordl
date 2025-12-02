#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/ClientInterface/AttemptData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AttemptData)
namespace System {
struct DateTime;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace OculusStudios::GraphQL::ClientInterface {
class AttemptData;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::ClientInterface::AttemptData);
// Dependencies System.DateTime, System.Object
namespace OculusStudios::GraphQL::ClientInterface {
// Is value type: false
// CS Name: OculusStudios.GraphQL.ClientInterface.AttemptData
class CORDL_TYPE AttemptData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _ended, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__ended, put = __cordl_internal_set__ended)) ::System::DateTime _ended;

  /// @brief Field _exception, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__exception, put = __cordl_internal_set__exception)) ::System::Exception* _exception;

  /// @brief Field _rawResponseData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__rawResponseData, put = __cordl_internal_set__rawResponseData)) ::StringW _rawResponseData;

  __declspec(property(get = get_ended)) ::System::DateTime ended;

  __declspec(property(get = get_exception)) ::System::Exception* exception;

  __declspec(property(get = get_rawResponseData)) ::StringW rawResponseData;

  /// @brief Field started, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_started, put = __cordl_internal_set_started)) ::System::DateTime started;

  /// @brief Method FinishAttempt, addr 0x5d17950, size 0x6c, virtual false, abstract: false, final false
  inline void FinishAttempt();

  /// @brief Method IsFinished, addr 0x5d179bc, size 0x6c, virtual false, abstract: false, final false
  inline bool IsFinished();

  static inline ::OculusStudios::GraphQL::ClientInterface::AttemptData* New_ctor();

  /// @brief Method RegisterException, addr 0x5d17a84, size 0x5c, virtual false, abstract: false, final false
  inline void RegisterException(::System::Exception* e);

  /// @brief Method RegisterRawResponseData, addr 0x5d17a28, size 0x5c, virtual false, abstract: false, final false
  inline void RegisterRawResponseData(::StringW json);

  constexpr ::System::DateTime const& __cordl_internal_get__ended() const;

  constexpr ::System::DateTime& __cordl_internal_get__ended();

  constexpr ::System::Exception* const& __cordl_internal_get__exception() const;

  constexpr ::System::Exception*& __cordl_internal_get__exception();

  constexpr ::StringW const& __cordl_internal_get__rawResponseData() const;

  constexpr ::StringW& __cordl_internal_get__rawResponseData();

  constexpr ::System::DateTime const& __cordl_internal_get_started() const;

  constexpr ::System::DateTime& __cordl_internal_get_started();

  constexpr void __cordl_internal_set__ended(::System::DateTime value);

  constexpr void __cordl_internal_set__exception(::System::Exception* value);

  constexpr void __cordl_internal_set__rawResponseData(::StringW value);

  constexpr void __cordl_internal_set_started(::System::DateTime value);

  /// @brief Method .ctor, addr 0x5d178e0, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ended, addr 0x5d178c8, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_ended();

  /// @brief Method get_exception, addr 0x5d178d8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Exception* get_exception();

  /// @brief Method get_rawResponseData, addr 0x5d178d0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_rawResponseData();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AttemptData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AttemptData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AttemptData(AttemptData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AttemptData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AttemptData(AttemptData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22447 };

  /// @brief Field started, offset: 0x10, size: 0x8, def value: None
  ::System::DateTime ___started;

  /// @brief Field _ended, offset: 0x18, size: 0x8, def value: None
  ::System::DateTime ____ended;

  /// @brief Field _rawResponseData, offset: 0x20, size: 0x8, def value: None
  ::StringW ____rawResponseData;

  /// @brief Field _exception, offset: 0x28, size: 0x8, def value: None
  ::System::Exception* ____exception;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::ClientInterface::AttemptData, ___started) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::ClientInterface::AttemptData, ____ended) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::ClientInterface::AttemptData, ____rawResponseData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::ClientInterface::AttemptData, ____exception) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::ClientInterface::AttemptData, 0x30>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::ClientInterface
NEED_NO_BOX(::OculusStudios::GraphQL::ClientInterface::AttemptData);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::ClientInterface::AttemptData*, "OculusStudios.GraphQL.ClientInterface", "AttemptData");
