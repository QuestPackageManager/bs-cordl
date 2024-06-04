#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_Extensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_Extensions)
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_Extensions;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_Extensions);
// Type: HoudiniEngineUnity::HEU_Extensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_Extensions*
class CORDL_TYPE HEU_Extensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ApproximatelyEquals, addr 0x25aee34, size 0x3c, virtual false, abstract: false, final false
  static inline bool ApproximatelyEquals(::UnityEngine::Quaternion quatA, ::UnityEngine::Quaternion value);

  /// @brief Method ApproximatelyEquals, addr 0x25aee70, size 0x10, virtual false, abstract: false, final false
  static inline bool ApproximatelyEquals(float_t self, float_t other, float_t epsilon);

  /// @brief Method AsByteArray, addr 0x25aee80, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> AsByteArray(::StringW self);

  /// @brief Method AsString, addr 0x25aeef8, size 0x80, virtual false, abstract: false, final false
  static inline ::StringW AsString(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method ConvertArrayToEquivable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::ArrayW<::HoudiniEngineUnity::IEquivable_1<T>*, ::Array<::HoudiniEngineUnity::IEquivable_1<T>*>*> ConvertArrayToEquivable(::ArrayW<T, ::Array<T>*> self);

  /// @brief Method ConvertList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename U> static inline ::System::Collections::Generic::List_1<U>* ConvertList(::System::Collections::Generic::List_1<T>* self);

  /// @brief Method ConvertListToEquivable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::IEquivable_1<T>*>* ConvertListToEquivable(::System::Collections::Generic::List_1<T>* self);

  /// @brief Method DecomposeToPosition, addr 0x25aefa8, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 DecomposeToPosition(::UnityEngine::Matrix4x4 self);

  /// @brief Method DecomposeToRotation, addr 0x25aefb4, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion DecomposeToRotation(::UnityEngine::Matrix4x4 self);

  /// @brief Method DecomposeToScale, addr 0x25af018, size 0x194, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 DecomposeToScale(::UnityEngine::Matrix4x4 self);

  /// @brief Method Filter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::Generic::List_1<T>* Filter(::System::Collections::Generic::IEnumerable_1<T>* self, ::System::Func_2<T, bool>* predicate);

  /// @brief Method IsEquivalentList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool IsEquivalentList(::System::Collections::Generic::List_1<T>* self, ::System::Collections::Generic::List_1<T>* other);

  /// @brief Method IsValidIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool IsValidIndex(::System::Collections::Generic::List_1<T>* self, int32_t index);

  /// @brief Method Map, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T, typename R> static inline ::System::Collections::Generic::List_1<R>* Map(::System::Collections::Generic::IEnumerable_1<T>* self, ::System::Func_2<T, R>* selector);

  /// @brief Method Reduce, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Reduce(::System::Collections::Generic::IEnumerable_1<T>* self, ::System::Func_3<T, T, T>* func);

  /// @brief Method SwapXAndY, addr 0x25aef78, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 SwapXAndY(::UnityEngine::Vector3 self);

  /// @brief Method SwapXAndZ, addr 0x25aef88, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 SwapXAndZ(::UnityEngine::Vector3 self);

  /// @brief Method SwapYAndZ, addr 0x25aef98, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 SwapYAndZ(::UnityEngine::Vector3 self);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_Extensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_Extensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_Extensions(HEU_Extensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_Extensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_Extensions(HEU_Extensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_Extensions, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_Extensions);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_Extensions*, "HoudiniEngineUnity", "HEU_Extensions");
