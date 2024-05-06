#pragma once
// IWYU pragma private; include "System/IObserver_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IObserver_1)
namespace System {
class Exception;
}
// Forward declare root types
namespace System {
template <typename T> class IObserver_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::IObserver_1);
// Type: System::IObserver`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::System::IObserver`1<T>*
class CORDL_TYPE IObserver_1 {
public:
  // Declarations
  /// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnCompleted();

  /// @brief Method OnError, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnError(::System::Exception* error);

  /// @brief Method OnNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnNext(T value);

  // Ctor Parameters [CppParam { name: "", ty: "IObserver_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IObserver_1(IObserver_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IObserver_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IObserver_1(IObserver_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::IObserver_1, "System", "IObserver`1");
