#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__FullBodyBipedEffector_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OffsetModifier)
namespace RootMotion::FinalIK {
class FullBodyBipedIK;
}
namespace RootMotion::FinalIK {
class __OffsetModifier___Initiate_d__8;
}
namespace RootMotion::FinalIK {
class __OffsetModifier__OffsetLimits;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
struct Quaternion;
}
namespace RootMotion::FinalIK {
class IKEffector;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class OffsetModifier;
}
namespace RootMotion::FinalIK {
class __OffsetModifier__OffsetLimits;
}
namespace RootMotion::FinalIK {
class __OffsetModifier___Initiate_d__8;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::OffsetModifier);
MARK_REF_PTR_T(::RootMotion::FinalIK::__OffsetModifier__OffsetLimits);
MARK_REF_PTR_T(::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8);
// Type: ::OffsetLimits
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(12571))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12654))
// CS Name: ::OffsetModifier::OffsetLimits*
class CORDL_TYPE __OffsetModifier__OffsetLimits : public ::System::Object {
public:
  // Declarations
  /// @brief Field effector, offset 0x10, size 0x4
  __declspec(property(get = __get_effector, put = __set_effector))::RootMotion::FinalIK::FullBodyBipedEffector effector;

  /// @brief Field spring, offset 0x14, size 0x4
  __declspec(property(get = __get_spring, put = __set_spring)) float_t spring;

  /// @brief Field x, offset 0x18, size 0x1
  __declspec(property(get = __get_x, put = __set_x)) bool x;

  /// @brief Field y, offset 0x19, size 0x1
  __declspec(property(get = __get_y, put = __set_y)) bool y;

  /// @brief Field z, offset 0x1a, size 0x1
  __declspec(property(get = __get_z, put = __set_z)) bool z;

  /// @brief Field minX, offset 0x1c, size 0x4
  __declspec(property(get = __get_minX, put = __set_minX)) float_t minX;

  /// @brief Field maxX, offset 0x20, size 0x4
  __declspec(property(get = __get_maxX, put = __set_maxX)) float_t maxX;

  /// @brief Field minY, offset 0x24, size 0x4
  __declspec(property(get = __get_minY, put = __set_minY)) float_t minY;

  /// @brief Field maxY, offset 0x28, size 0x4
  __declspec(property(get = __get_maxY, put = __set_maxY)) float_t maxY;

  /// @brief Field minZ, offset 0x2c, size 0x4
  __declspec(property(get = __get_minZ, put = __set_minZ)) float_t minZ;

  /// @brief Field maxZ, offset 0x30, size 0x4
  __declspec(property(get = __get_maxZ, put = __set_maxZ)) float_t maxZ;

  constexpr ::RootMotion::FinalIK::FullBodyBipedEffector& __get_effector();

  constexpr ::RootMotion::FinalIK::FullBodyBipedEffector const& __get_effector() const;

  constexpr void __set_effector(::RootMotion::FinalIK::FullBodyBipedEffector value);

  constexpr float_t& __get_spring();

  constexpr float_t const& __get_spring() const;

  constexpr void __set_spring(float_t value);

  constexpr bool& __get_x();

  constexpr bool const& __get_x() const;

  constexpr void __set_x(bool value);

  constexpr bool& __get_y();

  constexpr bool const& __get_y() const;

  constexpr void __set_y(bool value);

  constexpr bool& __get_z();

  constexpr bool const& __get_z() const;

  constexpr void __set_z(bool value);

  constexpr float_t& __get_minX();

  constexpr float_t const& __get_minX() const;

  constexpr void __set_minX(float_t value);

  constexpr float_t& __get_maxX();

  constexpr float_t const& __get_maxX() const;

  constexpr void __set_maxX(float_t value);

  constexpr float_t& __get_minY();

  constexpr float_t const& __get_minY() const;

  constexpr void __set_minY(float_t value);

  constexpr float_t& __get_maxY();

  constexpr float_t const& __get_maxY() const;

  constexpr void __set_maxY(float_t value);

  constexpr float_t& __get_minZ();

  constexpr float_t const& __get_minZ() const;

  constexpr void __set_minZ(float_t value);

  constexpr float_t& __get_maxZ();

  constexpr float_t const& __get_maxZ() const;

  constexpr void __set_maxZ(float_t value);

  /// @brief Method Apply, addr 0x1297d58, size 0x164, virtual false, abstract: false, final false
  inline void Apply(::RootMotion::FinalIK::IKEffector* e, ::UnityEngine::Quaternion rootRotation);

  /// @brief Method SpringAxis, addr 0x1297fc8, size 0x70, virtual false, abstract: false, final false
  inline float_t SpringAxis(float_t value, float_t min, float_t max);

  /// @brief Method Spring, addr 0x1298038, size 0x48, virtual false, abstract: false, final false
  inline float_t Spring(float_t value, float_t limit, bool negative);

  static inline ::RootMotion::FinalIK::__OffsetModifier__OffsetLimits* New_ctor();

  /// @brief Method .ctor, addr 0x1298080, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__OffsetModifier__OffsetLimits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OffsetModifier__OffsetLimits(__OffsetModifier__OffsetLimits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OffsetModifier__OffsetLimits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OffsetModifier__OffsetLimits(__OffsetModifier__OffsetLimits const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OffsetModifier__OffsetLimits();

public:
  /// @brief Field effector, offset: 0x10, size: 0x4, def value: None
  ::RootMotion::FinalIK::FullBodyBipedEffector ___effector;

  /// @brief Field spring, offset: 0x14, size: 0x4, def value: None
  float_t ___spring;

  /// @brief Field x, offset: 0x18, size: 0x1, def value: None
  bool ___x;

  /// @brief Field y, offset: 0x19, size: 0x1, def value: None
  bool ___y;

  /// @brief Field z, offset: 0x1a, size: 0x1, def value: None
  bool ___z;

  /// @brief Field minX, offset: 0x1c, size: 0x4, def value: None
  float_t ___minX;

  /// @brief Field maxX, offset: 0x20, size: 0x4, def value: None
  float_t ___maxX;

  /// @brief Field minY, offset: 0x24, size: 0x4, def value: None
  float_t ___minY;

  /// @brief Field maxY, offset: 0x28, size: 0x4, def value: None
  float_t ___maxY;

  /// @brief Field minZ, offset: 0x2c, size: 0x4, def value: None
  float_t ___minZ;

  /// @brief Field maxZ, offset: 0x30, size: 0x4, def value: None
  float_t ___maxZ;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits, 0x38>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__OffsetModifier__OffsetLimits, ___effector) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__OffsetModifier__OffsetLimits, ___spring) == 0x14, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__OffsetModifier__OffsetLimits, ___x) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__OffsetModifier__OffsetLimits, ___y) == 0x19, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__OffsetModifier__OffsetLimits, ___z) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__OffsetModifier__OffsetLimits, ___minX) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__OffsetModifier__OffsetLimits, ___maxX) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__OffsetModifier__OffsetLimits, ___minY) == 0x24, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__OffsetModifier__OffsetLimits, ___maxY) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__OffsetModifier__OffsetLimits, ___minZ) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__OffsetModifier__OffsetLimits, ___maxZ) == 0x30, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::<Initiate>d__8
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12655))
// CS Name: ::OffsetModifier::<Initiate>d__8*
class CORDL_TYPE __OffsetModifier___Initiate_d__8 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::RootMotion::FinalIK::OffsetModifier* __4__this;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Object*& __get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Object* value);

  constexpr ::RootMotion::FinalIK::OffsetModifier*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::OffsetModifier*> const& __get___4__this() const;

  constexpr void __set___4__this(::RootMotion::FinalIK::OffsetModifier* value);

  static inline ::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x1297c5c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x1298088, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x129808c, size 0x150, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x12981dc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x12981e4, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1298224, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__OffsetModifier___Initiate_d__8", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OffsetModifier___Initiate_d__8(__OffsetModifier___Initiate_d__8&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OffsetModifier___Initiate_d__8", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OffsetModifier___Initiate_d__8(__OffsetModifier___Initiate_d__8 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OffsetModifier___Initiate_d__8();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::RootMotion::FinalIK::OffsetModifier* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8, 0x28>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8, _____4__this) == 0x20, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::OffsetModifier
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12656))
// CS Name: ::RootMotion.FinalIK::OffsetModifier*
class CORDL_TYPE OffsetModifier : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _Initiate_d__8 = ::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8;

  using OffsetLimits = ::RootMotion::FinalIK::__OffsetModifier__OffsetLimits;

  /// @brief Field weight, offset 0x18, size 0x4
  __declspec(property(get = __get_weight, put = __set_weight)) float_t weight;

  /// @brief Field ik, offset 0x20, size 0x8
  __declspec(property(get = __get_ik, put = __set_ik))::RootMotion::FinalIK::FullBodyBipedIK* ik;

  /// @brief Field lastTime, offset 0x28, size 0x4
  __declspec(property(get = __get_lastTime, put = __set_lastTime)) float_t lastTime;

  __declspec(property(get = get_deltaTime)) float_t deltaTime;

  constexpr float_t& __get_weight();

  constexpr float_t const& __get_weight() const;

  constexpr void __set_weight(float_t value);

  constexpr ::RootMotion::FinalIK::FullBodyBipedIK*& __get_ik();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::FullBodyBipedIK*> const& __get_ik() const;

  constexpr void __set_ik(::RootMotion::FinalIK::FullBodyBipedIK* value);

  constexpr float_t& __get_lastTime();

  constexpr float_t const& __get_lastTime() const;

  constexpr void __set_lastTime(float_t value);

  /// @brief Method get_deltaTime, addr 0x12946ac, size 0x20, virtual false, abstract: false, final false
  inline float_t get_deltaTime();

  /// @brief Method OnModifyOffset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnModifyOffset();

  /// @brief Method Start, addr 0x1294a74, size 0x20, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method Initiate, addr 0x1297bf4, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* Initiate();

  /// @brief Method ModifyOffset, addr 0x1297c84, size 0xd4, virtual false, abstract: false, final false
  inline void ModifyOffset();

  /// @brief Method ApplyLimits, addr 0x12970dc, size 0xa8, virtual false, abstract: false, final false
  inline void ApplyLimits(::ArrayW<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*, ::Array<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*>*> limits);

  /// @brief Method OnDestroy, addr 0x1297ebc, size 0x10c, virtual true, abstract: false, final false
  inline void OnDestroy();

  static inline ::RootMotion::FinalIK::OffsetModifier* New_ctor();

  /// @brief Method .ctor, addr 0x12949ec, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OffsetModifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OffsetModifier(OffsetModifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OffsetModifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OffsetModifier(OffsetModifier const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OffsetModifier();

public:
  /// @brief Field weight, offset: 0x18, size: 0x4, def value: None
  float_t ___weight;

  /// @brief Field ik, offset: 0x20, size: 0x8, def value: None
  ::RootMotion::FinalIK::FullBodyBipedIK* ___ik;

  /// @brief Field lastTime, offset: 0x28, size: 0x4, def value: None
  float_t ___lastTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::OffsetModifier, 0x30>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::OffsetModifier, ___weight) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::OffsetModifier, ___ik) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::OffsetModifier, ___lastTime) == 0x28, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::OffsetModifier);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::OffsetModifier*, "RootMotion.FinalIK", "OffsetModifier");
NEED_NO_BOX(::RootMotion::FinalIK::__OffsetModifier__OffsetLimits);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*, "RootMotion.FinalIK", "OffsetModifier/OffsetLimits");
NEED_NO_BOX(::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8*, "RootMotion.FinalIK", "OffsetModifier/<Initiate>d__8");
