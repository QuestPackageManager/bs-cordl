#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ISonyOnlineServicesAvailabilityModel)
namespace GlobalNamespace {
class HMAsyncRequest;
}
namespace GlobalNamespace {
struct __ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult;
}
namespace GlobalNamespace {
struct __ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability;
}
namespace GlobalNamespace {
class __ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler;
}
namespace System {
class Object;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace GlobalNamespace {
struct __ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult;
}
namespace GlobalNamespace {
struct __ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability;
}
namespace GlobalNamespace {
class ISonyOnlineServicesAvailabilityModel;
}
namespace GlobalNamespace {
class __ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult);
MARK_VAL_T(::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability);
MARK_REF_PTR_T(::GlobalNamespace::ISonyOnlineServicesAvailabilityModel);
MARK_REF_PTR_T(::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler);
// Type: ::OnlineServicesAvailability
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4661))
// CS Name: ::ISonyOnlineServicesAvailabilityModel::OnlineServicesAvailability
struct CORDL_TYPE __ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability_Unwrapped
  enum struct ____ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Available = static_cast<int32_t>(0x1),
    __E_Unavailable = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability_Unwrapped() const noexcept {
    return static_cast<____ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability const Unknown;

  /// @brief Field Available value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability const Available;

  /// @brief Field Unavailable value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability const Unavailable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GetOnlineServicesAvailabilityResult
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4662))
// CS Name: ::ISonyOnlineServicesAvailabilityModel::GetOnlineServicesAvailabilityResult
struct CORDL_TYPE __ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult_Unwrapped
  enum struct ____ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult_Unwrapped : int32_t {
    __E_Available = static_cast<int32_t>(0x0),
    __E_Unavailable = static_cast<int32_t>(0x1),
    __E_Failed = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult_Unwrapped() const noexcept {
    return static_cast<____ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Available value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult const Available;

  /// @brief Field Unavailable value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult const Unavailable;

  /// @brief Field Failed value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult const Failed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GetOnlineServicesAvailabilityCompletionHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4663))
// CS Name: ::ISonyOnlineServicesAvailabilityModel::GetOnlineServicesAvailabilityCompletionHandler*
class CORDL_TYPE __ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x222ea00 size 0xc4 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x222eac4 size 0x14 virtual true final false
  inline void Invoke(::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult result);

  /// @brief Method BeginInvoke addr 0x222ead8 size 0x84 virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult result, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke addr 0x222eb5c size 0xc virtual true final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler(__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler(__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ISonyOnlineServicesAvailabilityModel
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4664))
// CS Name: ::ISonyOnlineServicesAvailabilityModel*
class CORDL_TYPE ISonyOnlineServicesAvailabilityModel {
public:
  // Declarations
  using GetOnlineServicesAvailabilityCompletionHandler = ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler;

  using GetOnlineServicesAvailabilityResult = ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult;

  using OnlineServicesAvailability = ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability;

  __declspec(property(get = get_onlineServicesAvailability))::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability onlineServicesAvailability;

  /// @brief Method get_onlineServicesAvailability addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability get_onlineServicesAvailability();

  /// @brief Method GetOnlineServicesAvailability addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::HMAsyncRequest* GetOnlineServicesAvailability(::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler* completionHandler);

  // Ctor Parameters [CppParam { name: "", ty: "ISonyOnlineServicesAvailabilityModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISonyOnlineServicesAvailabilityModel(ISonyOnlineServicesAvailabilityModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISonyOnlineServicesAvailabilityModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISonyOnlineServicesAvailabilityModel(ISonyOnlineServicesAvailabilityModel const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityResult, "", "ISonyOnlineServicesAvailabilityModel/GetOnlineServicesAvailabilityResult");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__OnlineServicesAvailability, "", "ISonyOnlineServicesAvailabilityModel/OnlineServicesAvailability");
NEED_NO_BOX(::GlobalNamespace::ISonyOnlineServicesAvailabilityModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISonyOnlineServicesAvailabilityModel*, "", "ISonyOnlineServicesAvailabilityModel");
NEED_NO_BOX(::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ISonyOnlineServicesAvailabilityModel__GetOnlineServicesAvailabilityCompletionHandler*, "",
                       "ISonyOnlineServicesAvailabilityModel/GetOnlineServicesAvailabilityCompletionHandler");
