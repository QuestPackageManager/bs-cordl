#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SpanAction_2)
namespace System {
template <typename T> struct Span_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Buffers {
template <typename T, typename TArg> class SpanAction_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Buffers::SpanAction_2);
// Type: System.Buffers::SpanAction`2
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Buffers {
// cpp template
template <typename T, typename TArg>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3879))
// CS Name: ::System.Buffers::SpanAction`2<T,TArg>*
class CORDL_TYPE SpanAction_2 : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::Buffers::SpanAction_2<T, TArg>* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Invoke(::System::Span_1<T> span, TArg arg);

  // Ctor Parameters [CppParam { name: "", ty: "SpanAction_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpanAction_2(SpanAction_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpanAction_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpanAction_2(SpanAction_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpanAction_2();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Buffers
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Buffers::SpanAction_2, "System.Buffers", "SpanAction`2");
