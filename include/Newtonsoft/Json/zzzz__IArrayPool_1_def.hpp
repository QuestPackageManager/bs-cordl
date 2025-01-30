#pragma once
// IWYU pragma private; include "Newtonsoft/Json/IArrayPool_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IArrayPool_1)
// Forward declare root types
namespace Newtonsoft::Json {
template <typename T> class IArrayPool_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Newtonsoft::Json::IArrayPool_1);
// Dependencies
namespace Newtonsoft::Json {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Newtonsoft.Json.IArrayPool`1<T>
class CORDL_TYPE IArrayPool_1 {
public:
  // Declarations
  /// @brief Method Rent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<T, ::Array<T>*> Rent(int32_t minimumLength);

  /// @brief Method Return, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Return(::ArrayW<T, ::Array<T>*> array);

  // Ctor Parameters [CppParam { name: "", ty: "IArrayPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IArrayPool_1(IArrayPool_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10056 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::IArrayPool_1, "Newtonsoft.Json", "IArrayPool`1");
