#pragma once
// IWYU pragma private; include "GlobalNamespace\MissionNodesHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MissionNodesHelper_def.hpp"
#include "GlobalNamespace/zzzz__MissionNode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionNodesHelper.GetAllNodesFromRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MissionNode>>* (*)(::GlobalNamespace::MissionNode*)>(
    &::GlobalNamespace::MissionNodesHelper::GetAllNodesFromRoot)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x593c890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesHelper*>(), { "GetAllNodesFromRoot", {}, { ::i2c::type_of<::GlobalNamespace::MissionNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodesHelper.VisitAllTree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::MissionNode*, ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MissionNode>>*)>(
    &::GlobalNamespace::MissionNodesHelper::VisitAllTree)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x593c910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::MissionNodesHelper*>(),
            { "VisitAllTree", {}, { ::i2c::type_of<::GlobalNamespace::MissionNode*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MissionNode>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodesHelper.CycleDetection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::MissionNode*)>(&::GlobalNamespace::MissionNodesHelper::CycleDetection)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x593c9fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesHelper*>(), { "CycleDetection", {}, { ::i2c::type_of<::GlobalNamespace::MissionNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodesHelper.CycleDetection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::GlobalNamespace::MissionNode*, int32_t, ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::MissionNode>, int32_t>*)>(
        &::GlobalNamespace::MissionNodesHelper::CycleDetection)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x593ca9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesHelper*>(),
                                                             { "CycleDetection",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::MissionNode*>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::MissionNode>, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodesHelper.FinalNodeIsFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::MissionNode*, ::GlobalNamespace::MissionNode*)>(&::GlobalNamespace::MissionNodesHelper::FinalNodeIsFinal)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x593cc18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesHelper*>(),
                                                             { "FinalNodeIsFinal", {}, { ::i2c::type_of<::GlobalNamespace::MissionNode*>(), ::i2c::type_of<::GlobalNamespace::MissionNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodesHelper.FinalNodeIsFinal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::GlobalNamespace::MissionNode*, ::GlobalNamespace::MissionNode*, ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MissionNode>>*)>(
        &::GlobalNamespace::MissionNodesHelper::FinalNodeIsFinal)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x593cca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesHelper*>(),
                                                             { "FinalNodeIsFinal",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::MissionNode*>(), ::i2c::type_of<::GlobalNamespace::MissionNode*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MissionNode>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodesHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionNodesHelper::*)()>(&::GlobalNamespace::MissionNodesHelper::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x593cdd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesHelper*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MissionNode>>* GlobalNamespace::MissionNodesHelper::GetAllNodesFromRoot(::GlobalNamespace::MissionNode* root) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesHelper*>(), { "GetAllNodesFromRoot", {}, { ::i2c::type_of<::GlobalNamespace::MissionNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MissionNode>>*>(nullptr, ___internal_method, root);
}
inline void GlobalNamespace::MissionNodesHelper::VisitAllTree(::GlobalNamespace::MissionNode* node, ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MissionNode>>* visitedNodes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MissionNodesHelper*>(),
          { "VisitAllTree", {}, { ::i2c::type_of<::GlobalNamespace::MissionNode*>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MissionNode>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, node, visitedNodes);
}
inline bool GlobalNamespace::MissionNodesHelper::CycleDetection(::GlobalNamespace::MissionNode* node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesHelper*>(), { "CycleDetection", {}, { ::i2c::type_of<::GlobalNamespace::MissionNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, node);
}
inline bool GlobalNamespace::MissionNodesHelper::CycleDetection(::GlobalNamespace::MissionNode* node, int32_t layer,
                                                                ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::MissionNode>, int32_t>* layers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesHelper*>(),
                                                           { "CycleDetection",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::MissionNode*>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::MissionNode>, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, node, layer, layers);
}
inline bool GlobalNamespace::MissionNodesHelper::FinalNodeIsFinal(::GlobalNamespace::MissionNode* finalNode, ::GlobalNamespace::MissionNode* rootNode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesHelper*>(),
                                                           { "FinalNodeIsFinal", {}, { ::i2c::type_of<::GlobalNamespace::MissionNode*>(), ::i2c::type_of<::GlobalNamespace::MissionNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, finalNode, rootNode);
}
inline bool GlobalNamespace::MissionNodesHelper::FinalNodeIsFinal(::GlobalNamespace::MissionNode* finalNode, ::GlobalNamespace::MissionNode* node,
                                                                  ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MissionNode>>* visitedNodes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesHelper*>(), { "FinalNodeIsFinal",
                                                                                       {},
                                                                                       { ::i2c::type_of<::GlobalNamespace::MissionNode*>(), ::i2c::type_of<::GlobalNamespace::MissionNode*>(),
                                                                                         ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::MissionNode>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, finalNode, node, visitedNodes);
}
inline void GlobalNamespace::MissionNodesHelper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionNodesHelper*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionNodesHelper* GlobalNamespace::MissionNodesHelper::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionNodesHelper*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionNodesHelper::MissionNodesHelper() {}
