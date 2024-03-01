#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Message_1)
namespace Oculus::Platform {
template <typename T> class __Message_1__Callback;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Oculus::Platform {
template <typename T> class Message_1;
}
namespace Oculus::Platform {
template <typename T> class __Message_1__Callback;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Oculus::Platform::Message_1);
MARK_GEN_REF_PTR_T(::Oculus::Platform::__Message_1__Callback);
// Type: ::Callback
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Message`1::Callback<T>*
class CORDL_TYPE __Message_1__Callback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::Oculus::Platform::Message_1<T>* message, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(::Oculus::Platform::Message_1<T>* message);

  static inline ::Oculus::Platform::__Message_1__Callback<T>* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Message_1__Callback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Message_1__Callback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Message_1__Callback(__Message_1__Callback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Message_1__Callback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Message_1__Callback(__Message_1__Callback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Oculus::Platform
// Type: Oculus.Platform::Message`1
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Oculus.Platform::Message`1<T>*
class CORDL_TYPE Message_1 : public ::Oculus::Platform::Message {
public:
  // Declarations
  using Callback = ::Oculus::Platform::__Message_1__Callback<T>;

  __declspec(property(get = get_Data)) T Data;

  /// @brief Field data, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) T data;

  /// @brief Method GetDataFromMessage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T GetDataFromMessage(void* c_message);

  static inline ::Oculus::Platform::Message_1<T>* New_ctor(void* c_message);

  constexpr T const& __cordl_internal_get_data() const;

  constexpr T& __cordl_internal_get_data();

  constexpr void __cordl_internal_set_data(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(void* c_message);

  /// @brief Method get_Data, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_Data();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Message_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Message_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Message_1(Message_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Message_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Message_1(Message_1 const&) = delete;

  /// @brief Field data, offset: 0x28, size: 0x8, def value: None
  T ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Oculus::Platform::Message_1, "Oculus.Platform", "Message`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Oculus::Platform::__Message_1__Callback, "Oculus.Platform", "Message`1/Callback");
