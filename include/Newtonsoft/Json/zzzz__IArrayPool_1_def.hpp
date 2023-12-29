#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IArrayPool_1)
// Forward declare root types
namespace Newtonsoft::Json {
template <typename T> class IArrayPool_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::IArrayPool_1);
// Type: Newtonsoft.Json::IArrayPool`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11729))
// CS Name: ::Newtonsoft.Json::IArrayPool`1<T>*
class CORDL_TYPE IArrayPool_1 {
public:
  // Declarations
  /// @brief Method Rent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::ArrayW<T, ::Array<T>*> Rent(int32_t minimumLength);

  /// @brief Method Return addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Return(::ArrayW<T, ::Array<T>*> array);

  // Ctor Parameters [CppParam { name: "", ty: "IArrayPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IArrayPool_1(IArrayPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IArrayPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IArrayPool_1(IArrayPool_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::IArrayPool_1, "Newtonsoft.Json", "IArrayPool`1");
