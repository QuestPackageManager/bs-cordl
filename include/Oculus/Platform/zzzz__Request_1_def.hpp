#pragma once
// IWYU pragma private; include "Oculus/Platform/Request_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Request_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Request_1)
namespace Oculus::Platform {
template <typename T> class Message_1_Callback;
}
namespace Oculus::Platform {
class Message;
}
// Forward declare root types
namespace Oculus::Platform {
template <typename T> class Request_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Oculus::Platform::Request_1);
// Dependencies Oculus.Platform.Request
namespace Oculus::Platform {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Oculus.Platform.Request`1<T>
class CORDL_TYPE Request_1 : public ::Oculus::Platform::Request {
public:
  // Declarations
  /// @brief Field callback_, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_callback_, put = __cordl_internal_set_callback_)) ::Oculus::Platform::Message_1_Callback<T>* callback_;

  /// @brief Method HandleMessage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void HandleMessage(::Oculus::Platform::Message* msg);

  static inline ::Oculus::Platform::Request_1<T>* New_ctor(uint64_t requestID);

  /// @brief Method OnComplete, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Oculus::Platform::Request_1<T>* OnComplete(::Oculus::Platform::Message_1_Callback<T>* callback);

  constexpr ::Oculus::Platform::Message_1_Callback<T>* const& __cordl_internal_get_callback_() const;

  constexpr ::Oculus::Platform::Message_1_Callback<T>*& __cordl_internal_get_callback_();

  constexpr void __cordl_internal_set_callback_(::Oculus::Platform::Message_1_Callback<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(uint64_t requestID);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Request_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Request_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Request_1(Request_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Request_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Request_1(Request_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15462 };

  /// @brief Field callback_, offset: 0x20, size: 0x8, def value: None
  ::Oculus::Platform::Message_1_Callback<T>* ___callback_;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Oculus::Platform::Request_1, "Oculus.Platform", "Request`1");
