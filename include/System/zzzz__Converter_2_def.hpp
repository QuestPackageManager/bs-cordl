#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Converter_2)
namespace System {
class Object;
}
// Forward declare root types
namespace System {
template <typename TInput, typename TOutput> class Converter_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Converter_2);
// Type: System::Converter`2
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// cpp template
template <typename TInput, typename TOutput>
// Is value type: false
// CS Name: ::System::Converter`2<TInput,TOutput>*
class CORDL_TYPE Converter_2 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TOutput Invoke(TInput input);

  static inline ::System::Converter_2<TInput, TOutput>* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Converter_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Converter_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Converter_2(Converter_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Converter_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Converter_2(Converter_2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Converter_2, "System", "Converter`2");
