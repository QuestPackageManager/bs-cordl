#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/MinimalMainThreadExecutor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MinimalMainThreadExecutor)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Action;
}
// Forward declare root types
namespace OculusStudios::GraphQL::Client {
class MinimalMainThreadExecutor;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor);
// Dependencies System.Object
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.MinimalMainThreadExecutor
class CORDL_TYPE MinimalMainThreadExecutor : public ::System::Object {
public:
  // Declarations
  /// @brief Field actions_, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_actions_, put = __cordl_internal_set_actions_)) ::System::Collections::Generic::List_1<::System::Action*>* actions_;

  /// @brief Field toRun_, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_toRun_, put = __cordl_internal_set_toRun_)) ::System::Collections::Generic::List_1<::System::Action*>* toRun_;

  static inline ::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor* New_ctor();

  /// @brief Method RunOnMainThread, addr 0x5d0caf4, size 0x14c, virtual false, abstract: false, final false
  inline void RunOnMainThread(::System::Action* runnable);

  /// @brief Method RunPendingActions, addr 0x5d0a4f0, size 0x378, virtual false, abstract: false, final false
  inline void RunPendingActions();

  /// @brief Method StartOnMainThread, addr 0x5d0cabc, size 0x38, virtual false, abstract: false, final false
  inline void StartOnMainThread(::System::Collections::IEnumerator* func, bool enableStop);

  constexpr ::System::Collections::Generic::List_1<::System::Action*>* const& __cordl_internal_get_actions_() const;

  constexpr ::System::Collections::Generic::List_1<::System::Action*>*& __cordl_internal_get_actions_();

  constexpr ::System::Collections::Generic::List_1<::System::Action*>* const& __cordl_internal_get_toRun_() const;

  constexpr ::System::Collections::Generic::List_1<::System::Action*>*& __cordl_internal_get_toRun_();

  constexpr void __cordl_internal_set_actions_(::System::Collections::Generic::List_1<::System::Action*>* value);

  constexpr void __cordl_internal_set_toRun_(::System::Collections::Generic::List_1<::System::Action*>* value);

  /// @brief Method .ctor, addr 0x5d0b4b4, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MinimalMainThreadExecutor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MinimalMainThreadExecutor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MinimalMainThreadExecutor(MinimalMainThreadExecutor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MinimalMainThreadExecutor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MinimalMainThreadExecutor(MinimalMainThreadExecutor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20244 };

  /// @brief Field actions_, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Action*>* ___actions_;

  /// @brief Field toRun_, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Action*>* ___toRun_;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor, ___actions_) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor, ___toRun_) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor, 0x20>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
NEED_NO_BOX(::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::MinimalMainThreadExecutor*, "OculusStudios.GraphQL.Client", "MinimalMainThreadExecutor");
