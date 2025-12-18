#pragma once
// IWYU pragma private; include "Unity/Properties/TypeConverter_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(TypeConverter_2)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Unity::Properties {
template <typename TSource, typename TDestination> class TypeConverter_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Properties::TypeConverter_2);
// Dependencies System.MulticastDelegate
namespace Unity::Properties {
// cpp template
template <typename TSource, typename TDestination>
// Is value type: false
// CS Name: Unity.Properties.TypeConverter`2<TSource,TDestination>
class CORDL_TYPE TypeConverter_2 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TDestination Invoke(::ByRef<TSource> value);

  static inline ::Unity::Properties::TypeConverter_2<TSource, TDestination>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeConverter_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeConverter_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeConverter_2(TypeConverter_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeConverter_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeConverter_2(TypeConverter_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19411 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::TypeConverter_2, "Unity.Properties", "TypeConverter`2");
