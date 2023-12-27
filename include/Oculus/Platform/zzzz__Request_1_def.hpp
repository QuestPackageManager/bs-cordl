#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Request_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Request_1)
namespace Oculus::Platform {
template <typename T> class __Message_1__Callback;
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
// Type: Oculus.Platform::Request`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13381))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13380))
// CS Name: ::Oculus.Platform::Request`1<T>*
class CORDL_TYPE Request_1 : public ::Oculus::Platform::Request {
public:
  // Declarations
  /// @brief Field callback_, offset 0x20, size 0x8
  __declspec(property(get = __get_callback_, put = __set_callback_))::Oculus::Platform::__Message_1__Callback<T>* callback_;

  constexpr ::Oculus::Platform::__Message_1__Callback<T>*& __get_callback_();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::__Message_1__Callback<T>*> const& __get_callback_() const;

  constexpr void __set_callback_(::Oculus::Platform::__Message_1__Callback<T>* value);

  static inline ::Oculus::Platform::Request_1<T>* New_ctor(uint64_t requestID);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(uint64_t requestID);

  /// @brief Method OnComplete addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::Oculus::Platform::Request_1<T>* OnComplete(::Oculus::Platform::__Message_1__Callback<T>* callback);

  /// @brief Method HandleMessage addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void HandleMessage(::Oculus::Platform::Message* msg);

  // Ctor Parameters [CppParam { name: "", ty: "Request_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Request_1(Request_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Request_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Request_1(Request_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Request_1();

public:
  /// @brief Field callback_, offset: 0x20, size: 0x8, def value: None
  ::Oculus::Platform::__Message_1__Callback<T>* ___callback_;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Oculus::Platform::Request_1, "Oculus.Platform", "Request`1");
