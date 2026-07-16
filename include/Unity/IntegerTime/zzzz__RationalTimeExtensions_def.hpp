#pragma once
// IWYU pragma private; include "Unity/IntegerTime/RationalTimeExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RationalTimeExtensions)
namespace Unity::IntegerTime {
struct RationalTime_TicksPerSecond;
}
namespace Unity::IntegerTime {
struct RationalTime;
}
// Forward declare root types
namespace Unity::IntegerTime {
class RationalTimeExtensions;
}
// Write type traits
MARK_REF_T(::Unity::IntegerTime::RationalTimeExtensions*);
DEFINE_IL2CPP_CLASS(::Unity::IntegerTime::RationalTimeExtensions*, "Unity.IntegerTime", "RationalTimeExtensions");
// Dependencies System.Object
namespace Unity::IntegerTime {
// Is value type: false
// CS Name: Unity.IntegerTime.RationalTimeExtensions
class CORDL_TYPE RationalTimeExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method Convert, addr 0x6a572f8, size 0x54, virtual false, abstract: false, final false
  static inline ::Unity::IntegerTime::RationalTime Convert(::Unity::IntegerTime::RationalTime time, ::Unity::IntegerTime::RationalTime_TicksPerSecond rate);

  /// @brief Method Convert_Injected, addr 0x6a57804, size 0x54, virtual false, abstract: false, final false
  static inline void Convert_Injected(::by_ref<::Unity::IntegerTime::RationalTime> time, ::by_ref<::Unity::IntegerTime::RationalTime_TicksPerSecond> rate,
                                      ::by_ref<::Unity::IntegerTime::RationalTime> ret);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RationalTimeExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RationalTimeExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RationalTimeExtensions(RationalTimeExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RationalTimeExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RationalTimeExtensions(RationalTimeExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9910 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::IntegerTime::RationalTimeExtensions) == 0x10, "Size mismatch!");

} // namespace Unity::IntegerTime
